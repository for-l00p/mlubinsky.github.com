<https://news.ycombinator.com/item?id=22718466> what is schema vs database in Postgres?

<https://bytes.yingw787.com/posts/2020/06/15/postgres_as_app_1/>

<https://hakibenita.com/sql-tricks-application-dba> 

<https://habr.com/ru/company/tensor/blog/511238/> GROUP SETs

<https://habr.com/ru/company/tensor/blog/508184/> Window functions

<http://www.interdb.jp/pg/>. internals

<https://medium.com/@rbranson/10-things-i-hate-about-postgresql-20dbab8c2791> What is wrong with Postgres?

<https://news.ycombinator.com/item?id=22775330>   What is wrong with Postgres?

<https://www.youtube.com/watch?v=xqTNceHxkIo> Postgres performance

<https://habr.com/ru/company/tensor/blog/498740/> SQL

<https://habr.com/ru/company/tensor/blog/494776/> SQL tricks

<https://habr.com/ru/company/tensor/blog/497008/>

<https://habr.com/ru/company/tensor/blog/492694/>
## Hierarhy
<https://towardsdatascience.com/recursive-sql-queries-with-postgresql-87e2a453f1b> Recursive SQL
<https://habr.com/ru/company/tensor/blog/501614/>.  how to manage the hierarhy of objects?

## Cube
https://www.postgresql.org/docs/current/cube.html

SP-Gist Index
https://habr.com/ru/company/postgrespro/blog/337502/

## Redis
<https://habr.com/ru/post/485672/>

## Materialize

Materialize is a streaming data warehouse. Materialize accepts input data from a variety of streaming sources (e.g. Kafka) and files (e.g. CSVs), and lets you query them using the PostgreSQL dialect of SQL.


<https://materialize.io/docs/>

<https://materialize.io/blog-olvm/>

## KeyDB

<https://habr.com/ru/company/flant/blog/478404/>

## Postgres

<https://www.graphile.org/postgraphile/postgresql-schema-design/>

<https://habr.com/ru/company/tensor/blog/492464/> 

<https://habr.com/ru/company/tensor/blog/492694/>

<https://towardsdatascience.com/recursive-sql-queries-with-postgresql-87e2a453f1b> Recursive SQL

<https://www.cybertec-postgresql.com/en/blog/>

<https://vladmihalcea.com/postgresql-triggers-isolation-levels/>


<http://www.interdb.jp/pg/index.html> PG internals

<https://habr.com/ru/company/postgrespro/blog/479618/>

<https://begriffs.com/posts/2018-01-01-sql-keys-in-depth.html> PK, constraints, etc

<https://begriffs.com/posts/2017-10-21-sql-domain-integrity.html> constraints

<https://begriffs.com/posts/2017-08-27-deferrable-sql-constraints.html> deferrable constraints

<https://habr.com/ru/post/479920/> WITH ORDINALITY

<https://habr.com/ru/company/barsgroup/blog/481694/> Partitioning

https://habr.com/ru/post/481122/

<https://habr.com/ru/post/484670/> .  Query 

<https://habr.com/ru/post/479508/> PG antipatterns: JOINS

<https://habr.com/ru/post/485398/> hstore sv JSON

<https://habr.com/ru/post/479298/> PostgreSQL Antipatterns: CTE x CTE

<https://erthalion.info/2019/12/06/postgresql-stay-curious/> PG at low level

<https://news.ycombinator.com/item?id=21721832> PG at low level

<https://habr.com/ru/post/479656/> ANALYZE TABLE statistics

<https://habr.com/ru/post/488968/> Простое обнаружение проблем производительности в PostgreSQL
<https://habr.com/ru/company/tensor/blog/488104/>

<https://habr.com/ru/post/483460/> . Windows functions

<https://www.postgresql.org/docs/12/functions-aggregate.html>
```
select
    generate_series(1, 10) x,
    generate_series(4, 31, 3) y
into
    toy_example;
    
select
    regr_slope(y, x) as m,
    regr_intercept(y, x) as b
from
    toy_example;
    
    
select
    x, m * x + b as y
from
    generate_series(9, 14) as x,
    (
        select
            regr_slope(y, x) as m,
            regr_intercept(y, x) as b
        from
            toy_example
    ) as mb;    
```    

### postgres on docker

<https://hub.docker.com/_/postgres>
```
docker pull postgres
docker run --name postgres -e POSTGRES_USER=postgres -e POSTGRES_PASSWORD=password -e POSTGRES_DB=postgres -p 5432:5432 -d postgres
```
<https://pythonspeed.com/articles/faster-db-tests/>  

<https://towardsdatascience.com/tricks-for-postgres-and-docker-that-will-make-your-life-easier-fc7bfcba5082>

<https://github.com/karlkeefer/pngr>



<https://techcommunity.microsoft.com/t5/Azure-Database-for-PostgreSQL/Architecting-petabyte-scale-analytics-by-scaling-out-Postgres-on/ba-p/969685>

<https://github.com/sqitchers/sqitch> Database change management 

<https://sivers.org/pg2> stored procedures

<https://news.ycombinator.com/item?id=21362190>

<https://www.cybertec-postgresql.com/en/joining-data-from-multiple-postgres-databases/>

<https://hakibenita.com/fast-load-data-python-postgresql>

### DISTINCT
<https://hakibenita.com/the-many-faces-of-distinct-in-postgre-sql> 

<https://www.yogeshchauhan.com/167/postgres/the-confusing-unique-and-useful-feature-in-postgres-distinct-on>

<https://news.ycombinator.com/item?id=22625642>


## Postgres 12

<https://www.cybertec-postgresql.com/en/discovering-less-known-postgresql-12-features/>

<https://rob.conery.io/2019/10/24/virtual-computed-columns-in-postgresql-12/>

## Pub/Subscribe, queue

<https://habr.com/ru/post/483014/>

<https://habr.com/ru/post/484978/>

<https://habr.com/ru/post/481556/>

<https://layerci.com/blog/postgres-is-the-answer/>

<https://news.ycombinator.com/item?id=21484215>

<https://threedots.tech/post/when-sql-database-makes-great-pub-sub/>

<https://news.ycombinator.com/item?id=21834152>

### Column store extension for PostgreSQL
<https://habr.com/ru/post/472396/>

<http://www.craigkerstiens.com/2019/11/13/postgres-interview-from-art-of-postgresql/>

## Merge Upsert

<https://pgdash.io/blog/postgres-insert.html>

<http://www.postgresqltutorial.com/postgresql-upsert/>

## Web dev on Postgres

<https://node-postgres.com> NodeJS driver/client

<https://www.npmjs.com/package/pg>

<https://github.com/aquametalabs/aquameta>

<https://news.ycombinator.com/item?id=21281042>

## Postgres schema

<https://www.cybertec-postgresql.com/en/tracking-view-dependencies-in-postgresql/>

<http://www.postgresqltutorial.com/postgresql-schema/>

<https://clarkdave.net/2015/06/aggregate-queries-across-postgresql-schemas/>

<https://severalnines.com/blog/postgresql-schema-management-basics>

<https://info.crunchydata.com/blog/demystifying-schemas-search_path-through-examples>

<https://dba.stackexchange.com/questions/185782/how-to-allow-user-access-to-non-owned-objects-in-postgres>

<https://knowledge.safe.com/articles/480/in-the-postgispostgres-reader-tables-from-a-differ.html>

```
SHOW search_path;
SET search_path TO myschema;
```
<https://stackoverflow.com/questions/34098326/how-to-select-a-schema-in-postgres-when-using-psql>

## Postgres 

<https://www.cybertec-postgresql.com/en/products/pg_timetable/> Job scheduling for Postgres

<http://www.postgresqltutorial.com/postgresql-cte/> CTE

<https://thebuild.com/presentations/not-your-job-pgconf-us-2017.pdf>

<http://www.craigkerstiens.com/2018/01/31/postgres-hidden-gems/>

<https://dev.to/heroku/postgres-is-underrated-it-handles-more-than-you-think-4ff3>

<https://lobste.rs/s/oqb6fu/postgres_is_underrated_it_handles_more>

<https://habr.com/ru/company/postgrespro/blog/443792/> Типичные ошибки при работе с PostgreSQL. Часть 2



<http://postgres-bits.herokuapp.com/#1>>

<https://wiki.postgresql.org/wiki/Don%27t_Do_This>


<https://www.youtube.com/watch?v=vFq9Yg8a3CE>

<https://gist.github.com/clhenrick/ebc8dc779fb6f5ee6a88>

<https://www.programming-books.io/essential/postgresql/>

<https://habr.com/ru/company/postgrespro/blog/330544/>

## Timeseries:

<https://github.com/ciconia/pmts>
PMTS is a collection of tools for working with time-series data in PostgreSQL written in SQL and PL/pgSQL, without needing to install extensions or work with outside tools. Its features include:

Automatic partitioning (sharding) of time-series tables by time range.
Automatic dropping of old partitions according to data retention settings.
Aggregation and summarizing utilities (WIP).

<https://www.cybertec-postgresql.com/en/postgresql-trivial-timeseries-examples/>

<https://www.cybertec-postgresql.com/en/timeseries-exclude-ties-current-row-and-group/>

## TimescalDB

<https://blog.timescale.com/blog/achieving-optimal-query-performance-with-a-distributed-time-series-database-on-postgresql/>

<https://habr.com/ru/company/oleg-bunin/blog/470902/>

## Indexes

<https://fosdem.org/2020/schedule/event/postgresql_a_deep_dive_into_postgresql_indexing/>

<https://fosdem.org/2020/schedule/event/postgresql_find_your_slow_queries_and_fix_them/>

```
select * from pg_indexes where tablename  = 'tracking';
```

<https://dzone.com/articles/looking-inside-postgres-at-a-gist-index> Gist

<https://habr.com/ru/company/postgrespro/blog/349224/>

<https://habr.com/ru/company/postgrespro/blog/330544/>

Combined index vs separate index 
<https://www.cybertec-postgresql.com/en/combined-indexes-vs-separate-indexes-in-postgresql/>

<https://habr.com/ru/company/mailru/blog/453046/> Indexes

<https://cube.dev/blog/postgresql-query-optimization/>

<https://news.ycombinator.com/item?id=19765761>


<https://wiki.postgresql.org/wiki/Don%27t_Do_This>

<https://pgdash.io/blog/postgres-features.html>


## Import JSON,XML files to postgree
https://github.com/okbob/pgimportdoc

## STORED PROCEDURES
<https://stackoverflow.com/questions/7945932/how-to-return-result-of-a-select-inside-a-function-in-postgresql>

<https://stackoverflow.com/questions/21662295/it-could-refer-to-either-a-pl-pgsql-variable-or-a-table-column>

## Python
<https://www.pgcli.com/> pgcli instead psql
<https://hakibenita.com/fast-load-data-python-postgresql>

<https://news.ycombinator.com/item?id=20399294>


https://blog.timescale.com/scaling-partitioning-data-postgresql-10-explained-cd48a712a9a1

http://www.craigkerstiens.com/categories/postgresql/

https://severalnines.com/blog/understanding-and-reading-postgresql-system-catalog

## Generate series

```
-- создаем миллион случайных чисел и строк
CREATE TABLE items AS
  SELECT
    (random()*1000000)::integer AS n,
    md5(random()::text) AS s
  FROM
    generate_series(1,1000000);
 ```   

```
  create table t(a integer, b text, c boolean);
  insert into t(a,b,c)
  select s.id, chr((32+random()*94)::integer), random() < 0.01
  from generate_series(1,100000) as s(id)
  order by random();
```  
<https://rob.conery.io/2018/08/01/simple-monthly-reports-in-postgresql-using-generate_series/>   

<https://habrahabr.ru/post/340460/>

<https://10clouds.com/blog/postgresql-10/>

<https://news.ycombinator.com/item?id=15634953>

```
select generate_series(1, 5);

SELECT RANDOM() AS tracking_id FROM generate_series(1, 5)


WITH full_dates as (
  --Select every date in range
  select generate_series(0,8) + date '2014-07-06' as fulldate
)
SELECT fulldate FROM full_dates;

-- use it with LEFT OUTER JOIN to eliminate gaps in data

WITH full_dates as (
  select generate_series(0,8) + date '2014-07-06' as fulldate
)
SELECT fulldate, COALESCE(temperature,0) as value 
FROM full_dates LEFT JOIN weather ON full_dates.fulldate=weather.date 
ORDER BY fulldate;
```

## Temporary view
http://vvvvalvalval.github.io/posts/using-postgresql-temporary-views-for-expressing-business-logic.html

https://severalnines.com/blog/using-kubernetes-deploy-postgresql

##  STORED PROCEDURES
<https://www.postgresql.org/docs/11/plpgsql-control-structures.html>
```
select n.nspname as schema_name,
       p.proname as specific_name,
       case p.prokind 
            when 'f' then 'FUNCTION'
            when 'p' then 'PROCEDURE'
            when 'a' then 'AGGREGATE'
            when 'w' then 'WINDOW'
            end as kind,
       l.lanname as language,
       case when l.lanname = 'internal' then p.prosrc
            else pg_get_functiondef(p.oid)
            end as definition,
       pg_get_function_arguments(p.oid) as arguments,
       t.typname as return_type
from pg_proc p
left join pg_namespace n on p.pronamespace = n.oid
left join pg_language l on p.prolang = l.oid
left join pg_type t on t.oid = p.prorettype 
where n.nspname not in ('pg_catalog', 'information_schema')
order by schema_name,
         specific_name;
```

## UI Clients 
<https://www.macpostgresclient.com/> . SQLPlus 
<https://eggerapps.at/postico/> Postico 
<https://tableplus.io/> TablePlus

## Trigger
<https://medium.com/@deb3007/trigger-function-in-postgresql-22e118bb082d>

## SQL
```
select distinct on (s.device_id) s.time, d.group_name, s.value 
from sensor_values s 
JOIN device_info d ON s.device_id=d.device_id 
ORDER BY s.device_id, time DESC;
```
 
<http://postgres-bits.herokuapp.com/#1>

<https://abelvm.github.io/sql/sql-tricks/>

<https://blog.jooq.org/2016/04/25/10-sql-tricks-that-you-didnt-think-were-possible/>

### LATERAL JOIN
 <https://heap.io/blog/engineering/postgresqls-powerful-new-join-type-lateral>
 
<https://abelvm.github.io/sql/sql-tricks/>

## Time Series analysis with postgres

<https://stackoverflow.com/questions/56863332/database-design-for-time-series>

<https://bytefish.de/blog/postgresql_interpolation/>
```
look for gaps in data greater than 1 hour.

CREATE OR REPLACE FUNCTION sample.datediff_seconds(start_t TIMESTAMP, end_t TIMESTAMP)
RETURNS DOUBLE PRECISION AS $$
    SELECT EXTRACT(epoch FROM $2 - $1) 
$$ LANGUAGE SQL;

SELECT  *
FROM (SELECT 
        weather_data.wban as wban, 
        weather_data.datetime as current_datetime,                 
        LAG(weather_data.datetime, 1, NULL) OVER (PARTITION BY weather_data.wban ORDER BY weather_data.datetime) AS previous_datetime
     FROM sample.weather_data) lag_select
WHERE sample.datediff_seconds (previous_datetime, current_datetime) > 3600;

```

<https://blog.hagander.net/finding-gaps-in-partitioned-sequences-203/> find gaps in sequences

<https://blog.jooq.org/2019/04/24/using-ignore-nulls-with-sql-window-functions-to-fill-gaps/>

<https://content.pivotal.io/blog/time-series-analysis-part-3-resampling-and-interpolation>

<https://tapoueh.org/blog/2018/02/find-the-number-of-the-longest-continuously-rising-days-for-a-stock/>


##  specify a password to psql non-interactively
```
PGPASSWORD=pass1234 psql -U MyUsername myDatabaseName

docker run -e PGPASSWORD="$(pbpaste)" --rm postgres psql -h www.example.com dbname username -c 'SELECT * FROM table;'
```

<https://habr.com/ru/company/oleg-bunin/blog/455248/>

<https://stackoverflow.com/questions/56552852/how-to-store-arrays-of-points-x-y-color-inside-postgres-array>

<https://stackoverflow.com/questions/56863332/database-design-for-time-series>

SELECT version();
```
cat docker-compose.yml
docker-compose up -d --no-deps --build postgrest
docker ps
docker log 5da443890939 
docker log 5da443890939 -f (like tail -f)


PGPASSWORD=changeme docker run -e PGPASSWORD=changeme -it --net=host --rm timescale/timescaledb psql -h localhost -U postgres -d timeseries -c "select * from sensor_info"

PGPASSWORD=changeme docker run -e PGPASSWORD=changeme -it --net=host --rm timescale/timescaledb psql -h localhost -U postgres -d timeseries -c "select * from device_info"
./pipeline.sh restart
curl -X POST -d 'json={"f":"1", "id": "016a0e2bf6bc000000000001001001d8", "d": [{"5000/0/5700": [{"t": 1555016324000, "v": {"current": 0.34444}}]}]}' http://localhost:8888/topic.test
PGPASSWORD=changeme docker run -e PGPASSWORD=changeme -it --net=host --rm timescale/timescaledb psql -h localhost -U postgres -d timeseries -c "select * from device_info"
PGPASSWORD=changeme docker run -e PGPASSWORD=changeme -it --net=host --rm timescale/timescaledb psql -h localhost -U postgres -d timeseries -c "select * from sensor_info"
PGPASSWORD=changeme docker run -e PGPASSWORD=changeme -it --net=host --rm timescale/timescaledb psql -h localhost -U postgres -d timeseries -c "select * from sensor_values"
  ```
## Functions
```
PostgreSQL NTILE Function
PostgreSQL PERCENT_RANK Function
PostgreSQL CUME_DIST Function
PostgreSQL Sequences
PostgreSQL LAG Function
PostgreSQL LEAD Function
PostgreSQL NTH_VALUE Function
PostgreSQL LAST_VALUE Function
PostgreSQL FIRST_VALUE Function
```

## LAG LEAD
```
DROP TABLE IF EXISTS weather;

CREATE TEMP TABLE weather(date date, temperature numeric);

INSERT INTO weather VALUES 
('2014-07-06', 86), ('2014-07-07', 88), 
('2014-07-08', 91), ('2014-07-09', 88), 
('2014-07-10', 86), ('2014-07-11', 84), 
('2014-07-12', 86), ('2014-07-13', 86);

SELECT date, temperature FROM weather ORDER BY date;

SELECT date, temperature, 
       LAG(temperature, 1) OVER(ORDER BY date) as day_before, 
       LEAD(temperature, 1) OVER(ORDER BY date) as day_after,
       (temperature - LAG(temperature, 1) OVER(ORDER BY date)) as difference_from_day_before
FROM weather ORDER BY date;
```

```
CREATE TABLE pay_history (
    employee_id int,
    fiscal_year INT,
    salary DECIMAL(10 , 2 ),
    PRIMARY KEY (employee_id, fiscal_year)
);
-- find both the current and previous year’s salary of all employees:
SELECT 
    employee_id, fiscal_year, salary,
    LAG(salary) OVER (
        PARTITION BY employee_id 
        ORDER BY fiscal_year) previous_salary
FROM
    pay_history;
```

##  DateTime

SHOW timezone;

<https://phili.pe/posts/timestamps-and-time-zones-in-postgresql/>

<https://momjian.us/main/blogs/pgblog/2019.html#February_11_2019>

<https://tech.codeyellow.nl/blog/pg-timezones/>

<https://stackoverflow.com/questions/48069425/converting-between-timezones-in-postgre>
SET timezone TO 'Europe/Zurich';
SELECT now();
All timezone-aware dates and times are stored internally in UTC.
```
SELECT '2016-01-01 00:00+10'::timestamptz;
      timestamptz
------------------------
 2015-12-31 15:00:00+01
``` 
Timezone-aware dates and times are converted to local time in the zone specified by the TimeZone configuration parameter before being displayed to the client. 
 
This timezone configuration has another effect. When parsing a timestamp that has no time zone designator (e.g. Z or ±hhmm), it will be assumed to be local to the currently set timezone: 

Don't use BETWEEN (especially with timestamps)! Why not?
BETWEEN uses a closed-interval comparison: the values of both ends of the specified range are included in the result.
This is a particular problem with queries of the form
```
SELECT * FROM blah WHERE timestampcol BETWEEN '2018-06-01' AND '2018-06-08'
```
This will include results where the timestamp is exactly 2018-06-08 00:00:00.000000, but not timestamps later in that same day. So the query might seem to work, but as soon as you get an entry exactly on midnight, you'll end up double-counting it.

Instead, do:
```
SELECT * FROM blah WHERE timestampcol >= '2018-06-01' AND timestampcol < '2018-06-08'
```
<https://mode.com/blog/postgres-sql-date-functions>

<https://dba.stackexchange.com/questions/185192/join-2-tables-by-closest-time-postgresql-9-6>
approximate time match

<https://habr.com/ru/company/postgrespro/blog/459236/> tsrange

```
select extract(dow from date '2016-12-18');      -- 0
select extract(isodow from date '2016-12-18');   -- 7
```
SHOW datestyle;

SET datestyle = "ISO, DMY";

https://stackoverflow.com/questions/6123484/how-do-i-alter-the-date-format-in-postgres/6124387
```
Same outcome:
select time from tracking where time < '2019-06-12 23:00';
select time from tracking where time < '06-12-2019 23:00';

```

## Geometric data Types
```
CREATE TABLE GEO(
  p POINT,
  b BOX,
  c CIRCLE
);

INSERT INTO GEO(p) VALUES( POINT(1,10));
INSERT INTO GEO(b) VALUES( BOX( '(1,2), (10,20)' ));
INSERT INTO GEO(c) VALUES( CIRCLE('(1,10),20)' ));
```
## Recursive SQL
```
WITH RECURSIVE t(n) AS (
  VALUES (1)
UNION ALL
  SELECT n+1 FROM t WHERE n < 100
)
SELECT sum(n) FROM t;
```

### VIEW with parameters?

set returning function:
```
create or replace function label_params(parm1 text, parm2 text)
  returns table (param_label text, param_graphics_label text)
as
$body$
  select ...
  WHERE region_label = $1 
     AND model_id = (SELECT model_id FROM models WHERE model_label = $2)
  ....
$body$
language sql;
```
Then you can do:

select * . from label_params('foo', 'bar')


In most cases the set-returning function is the way to go, but in the event that you want to both read and write to the set, a view may be more appropriate. And it is possible for a view to read a session parameter:

CREATE VIEW widget_sb AS SELECT * FROM widget WHERE column = cast(current_setting('mydomain.myparam') as int)
```
SET mydomain.myparam = 0
select * from widget_sb
[results here]

SET mydomain.myparam = 1
select * from widget_sb
[distinct results here]
```
### JSON

SELECT ROW_TO_JSON(table_name) FROM table_name

 <https://habr.com/ru/post/475178/>

<https://vsevolod.net/postgresql-jsonb-index/>

<https://www.w3resource.com/PostgreSQL/postgresql-json-functions-and-operators.php>

json_to_recordset()
<https://dba.stackexchange.com/questions/98191/postgresql-json-data-type-used-as-nosql-but-view-as-relational-data-structure>
```
create table jsontable ( id integer, data json );
INSERT INTO jsontable VALUES (1,
  '[{"a": 1, "b": 2}, {"a": 3, "b":2}]');
INSERT INTO jsontable VALUES (2,
  '[{"a": 5, "b": 8}, {"a": 9, "b":0}]');

select * from jsontable;

select id, sum(a), sum(b)
  from jsontable j
    CROSS JOIN LATERAL
    json_to_recordset(j.data) as x(a integer, b integer)
group by id
```

<https://www.reddit.com/r/PostgreSQL/comments/2u6ah3/how_to_use_json_to_recordset_on_json_stored_in_a/>



```
CREATE TABLE X(
  id serial PRIMARY KEY,
  j JSONB
);


INSERT INTO X(j) VALUES(
'
{
"points" :
  [ 
     {"x":1, "y":2},
     {"x":10, "y":20}
  ]
}
'
);

select jsonb_array_elements_text(j->'points') FROM X;
select jsonb_array_elements_text((j->>'points')::jsonb) FROM X;
Same outcome for 2 SQL's above 
  
```  

 
### Arrays
```
CREATE TABLE people
 (
  id serial,
  name text,
  points geometry[]
 );
 


insert into people (name, points) values (
  'Lincoln', 
   ARRAY [
        ST_MakePoint(1,2),  
        ST_MakePoint(3,3)
   ]
 );  
 
 Arrays in Postgres are 1-based!
 
 SELECT points[1],  ST_X(points[1]) as X, ST_Y(points[1]) as Y from people;
                   points                   | x | y
--------------------------------------------+---+---
 0101000000000000000000F03F0000000000000040 | 1 | 2
 
 select UNNEST(points) p  from people;
 
 
 select ST_X(p) as x, ST_Y(p) as y FROM (select UNNEST(points) as p from people) AS U;
 
``` 
### array_agg() concatenates all the input values into a PostgreSQL array.
```
drop table data;
create table data (sensor_id INT, date date, value numeric, name TEXT );
insert into data values(1, '2014-07-06', 86, 'A1');
insert into data values(1, '2014-07-08', 99, 'A2');

select array_to_string(array_agg (value), ',') as all
from data ;

select array_to_string(array_agg (name), ',') as all
from data ;


select array_agg(lap)
from (
  select id, number, position, time, flag_type from laps
) lap;

{"(1,1,4,\"628.744\",\"Green\")","(2,2,4,\"614.424\",\"Green\")", ... }


To convert this PostgreSQL array into JSON, we can use the array_to_json

select array_to_json(array_agg(lap))
from (
  select id, number, position, time, flag_type from laps
) lap;

[{"id":1,
  "number":1,
  "position":4,
  "time":"628.744",
  "flag_type":"Green"},
  ...]
```


### PostGIS

SELECT postgis_full_version();

<https://gis.stackexchange.com/questions/58605/which-function-for-creating-a-point-in-postgis>

<https://stackoverflow.com/questions/57367822/issue-with-st-contains-and-st-within-in-postgis>
<https://lists.osgeo.org/pipermail/postgis-users/2019-August/043463.html>
<https://www.wyzant.com/resources/answers/704882/issue-with-postgis-st-within>

<https://www.postgis.us/presentations/FOSS4G2017_PostGISSpatialTricks.pdf>

```
CREATE TABLE m_polygon (id SERIAL PRIMARY KEY, bounds POLYGON);
INSERT INTO m_polygon(bounds) VALUES( 
  '(0.0, 0.0),  (0.0, 10.0), (10.0, 0.0), (10.0, 10.0), (0,0)' 
);

SELECT ST_WITHIN(m_polygon.bounds , m_polygon.bounds ) FROM m_polygon;

ERROR:  function st_within(polygon, polygon) does not exist 
HINT:  No function matches the given name and argument types. You might 
need to add explicit type casts.

The following works:

SELECT ST_WITHIN(ST_MakePoint(1,1), ST_MakePoint(1,1) ) ;

Answer:
POLYGON is Postgres native type. Geometry is the type used in PostGIS. ST_... functions are Postgis functions.

Note that you can restrict a PostGIS geometry to a specific subtype (geometry(POLYGON))
If you don't want PostGIS, you would need to use native geometry operators.
```
<https://www.postgresql.org/docs/current/functions-geometry.html>
```
If you are to use spatial data, and since you already have PostGIS, it is much better to switch to true geometries:

CREATE TABLE m_polygon (id SERIAL PRIMARY KEY, bounds geometry(POLYGON));
INSERT INTO m_polygon(bounds) VALUES( 
  st_geomFromText('POLYGON((0.0 0.0, 0.0 10.0, 10.0 0.0, 10.0 10.0, 0 0))') 
);

SELECT ST_WITHIN(m_polygon.bounds , m_polygon.bounds ) FROM m_polygon;
```
<https://stackoverflow.com/questions/42106271/geoalchemy2-st-within-type-mismatch-between-point-and-polygon>
<https://coder1.com/articles/postgis-query-point-within-polygon>

```
Possible solution: cast the Geography as a Geometry in the query because ST_Within,  do not support geographies, they only support geometries).
```
<http://www.postgis.net/docs/ST_GeomFromText.html>
<http://www.postgis.net/docs/ST_GeogFromText.html>
<https://gis.stackexchange.com/questions/284991/how-do-i-construct-a-geometry-point-in-srid-4326-from-lat-and-long/284994>
```
ST_Within(CAST (Store.location, Geometry), 
         ST_GeomFromEWKT('SRID=4326;POLYGON((150 -33, 152 -33, 152 -31, 150 -31, 150 -33))')
```

<https://www.bostongis.com/PrinterFriendly.aspx?content_name=postgis_tut01>
<https://www.youtube.com/watch?v=EBfjZgjyZmM> \
<http://postgis.refractions.net/docs/> \
<http://postgis.org/documentation/> \
<https://trac.osgeo.org/postgis/wiki/UsersWikiMain> \
<https://postgis.net/docs/> \
<http://postgis.net/workshops/postgis-intro/geometries.html#collections>

```
4.1.3. SQL-MM Part 3
The SQL Multimedia Applications Spatial specification extends the simple features for SQL spec by
defining a number of circularly interpolated curves.
The SQL-MM definitions include 3DM, 3DZ and 4D coordinates, 
but do not allow the embedding of SRID information.
The Well-Known Text extensions are not yet fully supported. 
Examples of some simple curved geometries are shown below:
CIRCULARSTRING(0 0, 1 1, 1 0)
CIRCULARSTRING(0 0, 4 0, 4 4, 0 4, 0 0)

The CIRCULARSTRING is the basic curve type, similar to a LINESTRING in the linear world. 
A single segment required three points, the start and end points (first and third) and any other point on the arc. The exception to this is for a closed circle, where the start and end points are the same. In this case the second point MUST be the center of the arc, ie the opposite side of the circle. To chain arcs together, the last point of the previous arc becomes the first point of the next arc, just like in LINESTRING. This means that a valid circular string must have an odd number of points greater than 1.

COMPOUNDCURVE(CIRCULARSTRING(0 0, 1 1, 1 0),(1 0, 0 1))

A compound curve is a single, continuous curve that has both curved (circular) segments and linear segments. That means that in addition to having well-formed components, the end point of every component (except the last) must be coincident with the start point of the following component.

CURVEPOLYGON(CIRCULARSTRING(0 0, 4 0, 4 4, 0 4, 0 0),(1 1, 3 3, 3 1, 1 1))

Example compound curve in a curve polygon: CURVEPOLYGON(COMPOUNDCURVE(CIRCULARSTRING(0 0,2 0, 2 1, 2 3, 4 3),(4 3, 4 5, 1 4, 0 0)), CIRCULARSTRING(1.7 1, 1.4 0.4, 1.6 0.4, 1.6 0.5, 1.7 1) )

A CURVEPOLYGON is just like a polygon, with an outer ring and zero or more inner rings. The difference is that a ring can take the form of a circular string, linear string or compound string.

As of PostGIS 1.4 PostGIS supports compound curves in a curve polygon.

MULTICURVE((0 0, 5 5),CIRCULARSTRING(4 0, 4 4, 8 4))

The MULTICURVE is a collection of curves, which can include linear strings, circular strings or compound strings.

MULTISURFACE(CURVEPOLYGON(CIRCULARSTRING(0 0, 4 0, 4 4, 0 4, 0 0),(1 1, 3 3, 3 1, 1 1)),((10 10, 14 12, 11 10, 10 10),(11 11, 11.5 11, 11 11.5, 11 11)))

This is a collection of surfaces, which can be (linear) polygons or curve polygons.
```



<https://postgis.net/docs/manual-2.5/postgis_installation.html#install_short_version>

<https://medium.com/@Umesh_Kafle/postgresql-and-postgis-installation-in-mac-os-87fa98a6814d>

<https://gist.github.com/clhenrick/ebc8dc779fb6f5ee6a88>

<https://stackoverflow.com/search?q=+postgis+extension+docker> PostGIS Docker

<https://hub.docker.com/r/mdillon/postgis/>

```
Common Spatial Queries
You may view more of these in my intro to Visualizing Geospatial Data with CartoDB.

Find all polygons from dataset A that intersect points from dataset B:

SELECT a.*
FROM table_a_polygons a, table_b_points b
WHERE ST_Intersects(a.the_geom, b.the_geom);
Find all rows in a polygon dataset that intersect a given point:

-- note: geometry for point must be in the order lon, lat (x, y)
SELECT * FROM nyc_tenants_rights_service_areas
where
ST_Intersects(
  ST_GeomFromText(
   'Point(-73.982557 40.724435)', 4326
  ),
  nyc_tenants_rights_service_areas.the_geom    
);
Or using ST_Contains:

SELECT * FROM nyc_tenants_rights_service_areas
where
st_contains(
  nyc_tenants_rights_service_areas.the_geom,
  ST_GeomFromText(
   'Point(-73.917104 40.694827)', 4326
  )      
);
Counting points inside a polygon:

With ST_Containts():

SELECT us_counties.the_geom_webmercator,us_counties.cartodb_id,
count(quakes.the_geom)
AS total
FROM us_counties JOIN quakes
ON st_contains(us_counties.the_geom,quakes.the_geom)
GROUP BY us_counties.cartodb_id;
To update a column from table A with the number of points from table B that intersect table A's polygons:

update noise.hoods set num_complaints = (
	select count(*)
	from noise.locations
	where
	ST_Intersects(
		noise.locations.geom,
		noise.hoods.geom
	)
);
Select data within a bounding box
Using ST_MakeEnvelope

HINT: You can use bboxfinder.com to easily grab coordinates of a bounding box for a given area.

SELECT * FROM some_table
where geom && ST_MakeEnvelope(-73.913891, 40.873781, -73.907229, 40.878251, 4326)
Select points from table a that do not fall within any polygons in table b
This method makes use of spatial indexes and the indexes on gid for better performance

SELECT
  a.gid,
  a.st_address,
  a.city,
  a.st_num,
  a.the_geom
FROM
  points AS a LEFT JOIN
  polygons AS b ON
  ST_Intersects(a.the_geom, b.the_geom)
WHERE b.gid IS NULL;

```
<https://gis.stackexchange.com/questions/192022/saving-array-of-objects-in-postgis-field>
```
{"type":"FeatureCollection","totalFeatures":1,"features":[
      {"type":"Feature",
       "id":1,"geometry":
          {
           "type":"LineString",
           "coordinates":
               [
                 [-74.103465, 4.80778], 
                 [-74.10410333333333, 4.8071633333333335], 
                 [-74.10492833333333, 4.806211666666667], 
                 [-74.10492833333333, 4.806211666666667]
               ]
          },
          "geometry_name":"the_geom",
          "properties":
            {
                "name":"test", "
                timestamps":                
                [358.0,1150.0,1705.0,1971.0,2385.0,3493.0,4506.0,4802]
            }
          },
  ]
}

CREATE TABLE spatial_table (
    name VARCHAR(20),
    timestamps timestamp[],
    the_geom geometry
)
```
psql -d [yourdatabase] -c "CREATE EXTENSION postgis;"

Topology is packaged as a separate extension and installable with command:

psql -d [yourdatabase] -c "CREATE EXTENSION postgis_topology;"

Many of the PostGIS functions are written in the PL/pgSQL procedural language. As such, the next step to create a PostGIS database is to enable the PL/pgSQL language in your new database. This is accomplish by the command below command. For PostgreSQL 8.4+, this is generally already installed

createlang plpgsql [yourdatabase]

Now load the PostGIS object and function definitions into your database by loading the postgis.sql definitions file (located in [prefix]/share/contrib as specified during the configuration step).

psql -d [yourdatabase] -f postgis.sql

For a complete set of EPSG coordinate system definition identifiers, you can also load the spatial_ref_sys.sql definitions file and populate the spatial_ref_sys table. This will permit you to perform ST_Transform() operations on geometries.

psql -d [yourdatabase] -f spatial_ref_sys.sql

SELECT postgis_full_version();

CREATE TABLE gtest (id serial primary key, name varchar(20), geom geometry(LINESTRING));


https://postgis.net/docs/manual-2.5/using_postgis_dbmanagement.html#RefObject

INSERT INTO geotable ( the_geom, the_name )
  VALUES ( ST_GeomFromText('POINT(-126.4 45.32)', 312), 'A Place');
  
  UPDATE artwork SET where_is = ST_POINT(X, Y);


```
create a new table for data from a CSV that has lat and lon columns:

create table noise.locations
(                                     
name varchar(100),
complaint varchar(100), descript varchar(100),
boro varchar(50),
lat float8,
lon float8,
geom geometry(POINT, 4326)
);
inputing values for the geometry type after loading data from a CSV:
update noise.locations set the_geom = ST_SetSRID(ST_MakePoint(lon, lat), 4326);

adding a geometry column in a non-spatial table:
select addgeometryColumn('table_name', 'geom', 4326, 'POINT', 2);

calculating area in EPSG 4326:
alter table noise.hoods set area = (select ST_Area(geom::geography));


SELECT ST_MakePoint(longitude,latitude) as geom FROM list_points

In order to use your new geometries with other PostGIS functions, you need to specify the coordinate system (SRID) of your points with the ST_SetSRID function. The most widely used system is SRID=4326; that is, GPS coordinates). If you have no idea where your data comes from, it’s probably this one.

So our request becomes:

SELECT ST_SetSRID(ST_MakePoint(longitude,latitude),4326) as geom
		 FROM list_points
Sometimes you may want to convert your data to a specific coordinate system. 
It is possible with the ST_Transform function, which moves the coordinates of a geometry from its current system to another one.


SELECT ST_AsText(geom) as points FROM list_geom
SELECT ST_X(geom) as longitude, ST_Y(geom) as latitude FROM list_geom

```



  
### PostgREST

<http://postgrest.org> 

<http://postgrest.org/en/v5.2/api.html#binary-output>

<https://gitter.im/begriffs/postgrest?source=all-rooms-list>

<https://github.com/dbohdan/automatic-api/>

PostgreSQL + PostgREST + react-admin == fantastic stack.

<https://gist.github.com/michelp/efc882ce86bd60d50dcf5f11442a2aaf>

<https://github.com/subzerocloud/postgrest-starter-kit>

REST call in postman: localhost:3000/sensor_info

<https://pynative.com/python-postgresql-tutorial/>

<https://habr.com/ru/company/postgrespro/blog/442462/>

<https://habr.com/ru/company/okko/blog/443276/>

<https://habr.com/ru/post/444018/>

<https://habr.com/ru/company/postgrespro/blog/443792/>



```
CREATE TABLE Apt99_2016 (time TIMESTAMP WITH TIME ZONE NOT NULL, value REAL);

\copy Apt99_2016 (time, value) FROM '/home/michael/apartment/2016/Apt99_2016.csv' DELIMITER ',' CSV;

COPY 503760

select min(time), max(time) from Apt99_2016;
          min           |          max
------------------------+------------------------
 2016-01-01 00:00:00+00 | 2016-12-15 19:59:00+00
 
 
select date_trunc('hour', time) h_time , count(*) from Apt99_2016 group by  1;

select date_trunc('hour', time) h_time , count(*) from Apt99_2016 group by  h_time;

create TABLE Apt99_2016_hourly AS select date_trunc('hour', time) as time, sum(value) as value from Apt99_2016 group by  1;

8395

 select max(time) from Apt99_2016_hourly;
          max
------------------------
 2016-12-15 19:00:00+00


 select max(time) - interval '1680 hours' from Apt99_2016_hourly;
        ?column?
------------------------
 2016-10-06 19:00:00+00
 
 select count(*) from Apt99_2016_hourly WHERE time > '2016-10-06 19:00'::timestamp ;
 count
-------
  1680
``` 

<https://rob.conery.io/2018/08/13/transactional-data-operations-in-postgresql-using-common-table-expressions/>

$ sudo systemctl {status|stop|start} postgresql-11

$ brew services start postgresql (MacOS)
```
ALTER USER michael PASSWORD 'myPassword';
psql -d michael -U michael -p 5432 -h 18.221.216.253
(for postgres: changeme)
psql -h 18.188.19.105 -U postgres
```

### PORT
default port 5432 
The default port of Postgres is commonly configured in file postgresql.conf

SELECT * FROM pg_settings WHERE name = 'port';
 
$ psql -h localhost -U postgres -p 5433  #  connect to non-standard port

$ sudo -u postgres -i

```
postgres=# \du
                                   List of roles
 Role name |                         Attributes                         | Member of
-----------+------------------------------------------------------------+-----------
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}

```

$ sudo -u postgres createuser -s new_user

To create a superuser role and a database for your personal user account:
$ sudo -u postgres createuser -s $(whoami) .  # -s means: super user
$ createdb $(whoami)


\dt . is the same as SELECT * FROM pg_catalog.pg_tables

\l is the equivalent of show databases

$ psql --help
```
Connection options:
  -h, --host=HOSTNAME      database server host or socket directory (default: "local socket")
  -p, --port=PORT          database server port (default: "5432")
  -U, --username=USERNAME  database user name (default: "miclub01")
  -w, --no-password        never prompt for password
  -W, --password           force password prompt (should happen automatically)

For more information, type "\?" (for internal commands) or "\help" (for SQL
commands) from within psql, 
```
$ psql -l
```
                                  List of databases
   Name    |  Owner   | Encoding |   Collate   |    Ctype    |   Access privileges
-----------+----------+----------+-------------+-------------+-----------------------
 postgres  | miclub01 | UTF8     | en_US.UTF-8 | en_US.UTF-8 |
 template0 | miclub01 | UTF8     | en_US.UTF-8 | en_US.UTF-8 | =c/miclub01          +
           |          |          |             |             | miclub01=CTc/miclub01
 template1 | miclub01 | UTF8     | en_US.UTF-8 | en_US.UTF-8 | =c/miclub01          +
           |          |          |             |             | miclub01=CTc/miclub01
           
```  
### Configuration

<https://www.cybertec-postgresql.com/en/setting-postgresql-configuration-parameters/> 

https://www.ongres.com/blog/postgresqlconf-configuration-for-humans/

<https://pgdash.io/blog/scaling-postgres.html> .  configuration

<https://pgdash.io/blog/postgres-configuration-cheatsheet.html>

### Config files
```
# show hba_file;
------------------------------------
 /var/lib/pgsql/11/data/pg_hba.conf

# show config_file;
----------------------------------------
 /var/lib/pgsql/11/data/postgresql.conf
 

sudo grep host  /var/lib/pgsql/11/data/pg_hba.conf
host    all             all             127.0.0.1/32         ident
host    all             all             0.0.0.0/0            md5

ident authentication uses the operating system’s identification server running at TCP port 113 to verify the user’s credentials.

peer authentication on the other hand, is used for local connections and verifies that the logged in username of the operating system matches the username for the Postgres database.

```


## Links

<http://www.interdb.jp/pg/index.html>

<https://www.qwertee.io/blog/postgresql-b-tree-index-explained-part-1/>

<https://pgdash.io/blog/postgres-features.html>

## Scaling Postgres
<https://medium.com/avitotech/standby-in-production-scaling-application-in-second-largest-classified-site-in-the-world-97a79a1929de
>
<https://habr.com/ru/post/461997/> performance
<https://habr.com/ru/post/461071/>

## Explain plan

<https://fosdem.org/2020/schedule/event/postgresql_find_your_slow_queries_and_fix_them/>

<https://habr.com/ru/post/477624/>

<https://www.youtube.com/watch?v=IwahVdNboc8>

<https://pganalyze.com/ebooks/optimizing-postgres-query-performance?utm_source=PostgresWeeklySecondary>

<https://www.youtube.com/watch?v=uhvqly8MtoI> Postgres 12





<https://www.citusdata.com/blog/2018/10/31/materialized-views-vs-rollup-tables/>

<https://heapanalytics.com/blog/engineering/when-to-avoid-jsonb-in-a-postgresql-schema>

<https://explain.depesz.com/> .  Explain plan explained

<https://pgexercises.com/>

<https://severalnines.com/blog/my-favorite-postgresql-queries-and-why-they-matter>

<https://heapanalytics.com/blog/engineering/running-10-million-postgresql-indexes-in-production>

<https://postgresweekly.com/issues/286> .  Postgres in 2018 summary

<https://wiki.postgresql.org/wiki/Things_to_find_out_about_when_moving_from_MySQL_to_PostgreSQL>

Declarative Partitioning in version 11:
<https://www.postgresql.org/docs/11/static/ddl-partitioning.html#DDL-PARTITIONING-DECLARATIVE>

https://brandur.org/postgres-default
 
https://habr.com/post/419749/

https://wiki.postgresql.org/wiki/PostgreSQL_vs_SQL_Standard

https://pgdash.io/blog/postgres-features.html

http://www.databasesoup.com/2018/04/new-annotated-config-files-for.html    configs

https://severalnines.com/blog/postgresql-tuning-key-things-drive-performance

https://blog.2ndquadrant.com/scaling-iot-time-series-data-postgres-bdr/ **time based partitioning**

https://gist.github.com/Kartones/dd3ff5ec5ea238d4c546

https://www.youtube.com/watch?v=BgcJnurVFag Postgres at 20T and beyond

https://news.ycombinator.com/item?id=17638169

https://www.cybertec-postgresql.com/en/index-decreases-select-performance/#

https://pgdash.io/blog/partition-postgres-11.html

https://blog.timescale.com/scaling-partitioning-data-postgresql-10-explained-cd48a712a9a1

https://www.justwatch.com/blog/post/debugging-postgresql-performance-the-hard-way/

https://blog.algolia.com/building-real-time-analytics-apis/

https://github.com/bytefish/PgBulkInsert

https://severalnines.com/blog/my-favorite-postgresql-queries-and-why-they-matter

https://pgdash.io/blog/postgres-features.html

https://news.ycombinator.com/item?id=17356960

https://www.citusdata.com/blog/2018/01/24/citus-and-pg-partman-creating-a-scalable-time-series-database-on-PostgreSQL/

https://www.citusdata.com/blog/2016/09/09/pgcron-run-periodic-jobs-in-postgres/

https://www.citusdata.com/blog/2018/06/14/scalable-incremental-data-aggregation/

https://cldellow.com/2016/09/15/brin-indexes-in-postgres-9.5.html

https://blog.getbotmetrics.com/150x-speedup-in-real-time-dashboards-with-postgres-9-5-2e987a5b906e

https://www.citusdata.com/blog/2017/03/10/how-to-scale-postgresql-on-aws/
