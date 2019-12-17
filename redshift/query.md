
<https://docs.aws.amazon.com/redshift/latest/gsg/rs-gsg-create-sample-db.html>

<https://docs.aws.amazon.com/redshift/latest/dg/Math_functions.html>

<https://docs.aws.amazon.com/redshift/latest/dg/String_functions_header.html>

https://docs.aws.amazon.com/redshift/latest/dg/r_Data_type_formatting.html


```
select md5('Amazon Redshift');

create table winsales(
salesid int,
dateid date,
sellerid int,
buyerid char(10),
qty int,
qty_shipped int);

insert into winsales values
(30001, '8/2/2003', 3, 'b', 10, 10),
(10001, '12/24/2003', 1, 'c', 10, 10),
(10005, '12/24/2003', 1, 'a', 30, null),	
(40001, '1/9/2004', 4, 'a', 40, null),	
(10006, '1/18/2004', 1, 'c', 10, null),	
(20001, '2/12/2004', 2, 'b', 20, 20),
(40005, '2/12/2004', 4, 'a', 10, 10),
(20002, '2/16/2004', 2, 'c', 20, 20),
(30003, '4/18/2004', 3, 'b', 15, null),
(30004, '4/18/2004', 3, 'b', 20, null),	
(30007, '9/7/2004', 3, 'c', 30, null);	 


select salesid, dateid, sellerid, qty,
avg(qty) over
(order by dateid, salesid rows unbounded preceding) as avg
from winsales
order by 2,1;

select salesid, qty,
count(*) over (order by salesid rows unbounded preceding) as count
from winsales
order by salesid;

select salesid, qty, qty_shipped,
count(qty_shipped)
over (order by salesid rows unbounded preceding) as count
from winsales
order by salesid;

select sellerid, qty, cume_dist() 
over (partition by sellerid order by qty) 
from winsales;

select salesid, qty,
dense_rank() over(order by qty desc) as d_rnk,
rank() over(order by qty desc) as rnk
from winsales
order by 2,1;

select salesid, sellerid, qty,
dense_rank() over(partition by sellerid order by qty desc) as d_rnk
from winsales
order by 2,3,1;

select listagg(sellerid) 
within group (order by sellerid)
over() from winsales;

select listagg(sellerid) 
within group (order by dateid)
over () as seller
from winsales
where buyerid = 'b' ;

select listagg(distinct dateid,',') 
within group (order by sellerid desc,salesid asc)
over () as dates
from winsales
where buyerid  = 'b';

select buyerid, 
listagg(salesid,',')
within group (order by salesid)
over (partition by buyerid) as sales_id
from winsales
order by buyerid;

select salesid, qty,
max(qty) over (order by salesid rows unbounded preceding) as max
from winsales
order by salesid;

select salesid, qty,
max(qty) over (order by salesid rows between 2 preceding and 1 preceding) as max
from winsales
order by salesid;

select sellerid, qty, median(qty) 
over (partition by sellerid) 
from winsales
order by sellerid;

select salesid, qty,
min(qty) over
(order by salesid rows unbounded preceding)
from winsales
order by salesid;
```

<https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_TABLE_examples.html>
```
create table venue(
venueid smallint not null,
venuename varchar(100),
venuecity varchar(30),
venuestate char(2),
venueseats integer,
primary key(venueid))
; 

select venuestate, venuename, venueseats,
nth_value(venueseats, 3)
ignore nulls
over(partition by venuestate order by venueseats desc
rows between unbounded preceding and unbounded following)
as third_most_seats
from (select * from venue where venueseats > 0 and
venuestate in('CA', 'FL', 'NY'))
order by venuestate;

select sellerid, qty, percent_rank() 
over (partition by sellerid order by qty) 
from winsales;

select sellerid, qty, percentile_cont(0.5) 
within group (order by qty) 
over() as median from winsales;

select sellerid, qty, percentile_cont(0.5) 
within group (order by qty) 
over(partition by sellerid) as median from winsales;

select sellerid, qty, percentile_disc(0.5) 
within group (order by qty) 
over() as median from winsales;

select sellerid, qty, percentile_disc(0.5) 
within group (order by qty) 
over(partition by sellerid) as median from winsales;

select salesid, qty,
rank() over (order by qty) as rnk
from winsales
order by 2,1;

select salesid, sellerid, qty, rank() over
(partition by sellerid
order by qty desc) as rank
from winsales
order by 2,3,1;


select sellerid, qty, ratio_to_report(qty) 
over (partition by sellerid) 
from winsales;


select salesid, sellerid, qty, 
row_number() over 
(partition by sellerid
 order by qty asc) as row
from winsales
order by 2,4;

select salesid, dateid, sellerid, qty,
sum(qty) over (order by dateid, salesid rows unbounded preceding) as sum
from winsales
order by 2,1;

select salesid, dateid, sellerid, qty,
sum(qty) over (partition by sellerid
order by dateid, salesid rows unbounded preceding) as sum
from winsales
order by 2,1;

select salesid, sellerid, qty,
sum(1) over (order by sellerid, salesid rows unbounded preceding) as rownum
from winsales
order by 2,1;
```
### Sales
``` 
create table sales(
salesid integer not null,
listid integer not null,
sellerid integer not null,
buyerid integer not null,
eventid integer not null ,
dateid smallint not null,
qtysold smallint not null ,
pricepaid decimal(8,2) ,
commission decimal(8,2) ,
saletime timestamp,
primary key(salesid),
foreign key(listid) references listing(listid),
foreign key(sellerid) references users(userid),
foreign key(buyerid) references users(userid),
foreign key(dateid) references date(dateid))
;

select salesid, dateid, pricepaid,
round(stddev_pop(pricepaid) over
(order by dateid, salesid rows unbounded preceding)) as stddevpop,
round(var_pop(pricepaid) over
(order by dateid, salesid rows unbounded preceding)) as varpop
from sales
order by 2,1;

SELECT sellerid, state, sum(qtysold*pricepaid) sales, 
percentile_cont(0.6) within group (order by sum(qtysold*pricepaid::decimal(14,2) ) desc) over(),
percentile_disc(0.6) within group (order by sum(qtysold*pricepaid::decimal(14,2) ) desc) over()
from sales s, users u 
where s.sellerid = u.userid and state = 'WA' and sellerid < 1000
group by sellerid, state;
```
### cond expression
```
select decode(NULL, null, 1234, '2345');
select nvl2(NULL, '2345', 1234);
select greatest(1,2,3) as G , LEAST(1,2,3) as l ;
select nullif(listid,salesid), salesid from sales where salesid<10 order by 1, 2 desc;

select decode(caldate, '2008-06-01', 'June 1st, 2008')
from date where month='JUN' order by caldate;
```
### date and time

<https://docs.aws.amazon.com/redshift/latest/dg/r_Dateparts_for_datetime_functions.html>
```
select distinct trunc(add_months(caldate, 12)) as calplus12,
trunc(caldate) as cal
from date
order by 1 asc;

select datediff(day, saletime, last_day(saletime)) as "Days Remaining", sum(qtysold)
from sales
where datediff(day, saletime, last_day(saletime)) < 7
group by 1 order by 1;

select months_between('1969-01-18', '1969-03-18')as months; 
select next_day('2011-10-10', 'Sunday');
select sysdate;
select timeofday();

SELECT TIMESTAMP_CMP('2011-10-10 15:00', '2011-10-10 19:00');
SELECT TIMESTAMP_CMP_DATE('2011-10-10 15:00', '2011-10-10 19:00');

select sysdate,
to_timestamp (sysdate, 'HH24:MI:SS') as seconds;

select trunc('2011-10-10 15:00');

create table seconds(micro timestamp);

insert into seconds values('2009-09-21 11:10:03.189717');

select extract(sec from micro) from seconds;
date_part
-----------
3
(1 row)

select date_part(sec, micro) from seconds;
```