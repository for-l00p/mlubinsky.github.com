VictoriaMetrics

<https://habr.com/ru/post/494034/>

<https://medium.com/@teebr/iot-with-an-esp32-influxdb-and-grafana-54abc9575fb2>>


<https://habr.com/ru/post/448676/>

<https://news.ycombinator.com/item?id=21343521>

<https://itnext.io/javascript-real-time-visualization-of-high-frequency-streams-d6533c774794>

<https://medium.com/@xaviergeerinck/building-a-real-time-streaming-dashboard-with-spark-grafana-chronograf-and-influxdb-e262b68087de>

https://github.com/creativetimofficial/material-dashboard

<https://grafana.com/docs/reference/templating/#the-timefilter-or-timefilter-variable>

https://utcc.utoronto.ca/~cks/space/blog/sysadmin/PrometheusGrafanaSetup-2019

https://habr.com/ru/post/482272/

 

<https://grafana.com/docs/reference/templating/#the-timefilter-or-timefilter-variable>

WHERE $__timeFilter  

<https://youtu.be/FhNUrueWwOk?list=PLDGkOdUX1Ujo3wHw9-z5Vo12YLqXRjzg2> . Variables in Grafana

<https://grafana.com/docs/reference/templating/>

<https://kb.groundworkopensource.com/display/DOC721/How+to+GroundWork+Grafana+dashboard+variables>

The templating feature allows you to create variables that can be used in your metric queries, series names and panel titles. Use this feature to create generic dashboards that can quickly be changed to show graphs for different servers or metrics.

http://localhost:3000/

http://localhost:3000/datasources

http://ec2-18-221-216-253.us-east-2.compute.amazonaws.com:3000/login . admin/admin1

<https://grafana.com/plugins/postgres>

http://docs.grafana.org/features/datasources/postgres/

https://grafana.com/blog/2018/10/15/make-time-series-exploration-easier-with-the-postgresql/timescaledb-query-editor/

https://stackoverflow.com/questions/48512014/using-postgres-with-grafana

https://habr.com/ru/company/1cloud/blog/443006/

https://www.youtube.com/watch?v=sKNZMtoSHN4&index=7&list=PLDGkOdUX1Ujo3wHw9-z5Vo12YLqXRjzg2




https://www.youtube.com/watch?v=sKNZMtoSHN4&index=7&list=PLDGkOdUX1Ujo3wHw9-z5Vo12YLqXRjzg2


## Prometheus - for system monitoring 


https://utcc.utoronto.ca/~cks/space/blog/sysadmin/PrometheusGrafanaSetup-2019

https://habr.com/ru/post/482272/

https://github.com/danielfm/prometheus-for-developers

https://habr.com/ru/company/southbridge/blog/455290/

 https://habr.com/ru/company/itsumma/blog/350200/
 
В состав Prometheus входят следующие компоненты:
* сервер, который считывает метрики и сохраняет их в темпоральной (time series) базе данных;
* клиентские библиотеки для различных языков программирования (Go, Java, Python, Ruby, ...)
* Pushgateway — компонент для приёма метрик кратковременных процессов;
* PROMDASH — дашборд для метрик;
* инструменты для экспорта данных из сторонних приложений (Statsd, Ganglia, HAProxy и других);
* менеджер уведомлений AlertManager (на текущий момент находится на стадии бета-тестирования);
* клиент командной строки для выполнения запросов к данным.

Большинство из них написаны на Go, а совсем небольшая часть — на Ruby и Java. 

Все компоненты Prometheus взаимодействуют между собой по протоколу HTTP:

Сбор метрик в Prometheus осуществляется с помощью механизма pull. 
Имеется также возможность сбора метрик с помощью механизма push (для этого используется специальный компонент pushgateway, 
который устанавливается отдельно). Это может понадобиться в ситуациях, 
когда сбор метрики с помощью pull по тем или иным причинам невозможен: например, при наблюдении за сервисами, защищёнными фаерволлом. Также механизм push может оказаться полезным при наблюдении за сервисами, 
подключающихся к сети периодически и на непродолжительное время.
 
Prometheus использует pull модель сбора метрик: у него есть список экспортеров и он опрашивает их по HTTP, 
собирая с них список метрик и кладя их к себе в хранилище.


Экспортер — это агент, который занимается сбором метрик непосредственно с сущности 
(сервера в целом, или конкретного приложения), которую надо мониторить. 
У Prometheus богатые возможности для инструментации, поэтому экспортеры есть для большинства популярных приложений, 
и написать свой в случае надобности не представляет особого труда.

https://habr.com/ru/post/345370/
postgres_exporter работает следующим образом: он подключается к PostgreSQL, выполняет запросы к служебным таблицам 
и выставляет результаты в специальном формате с помощью внутреннего HTTP-сервера для забора их Prometheus'ом. 
Важный момент: помимо большого набора дефолтных запросов, можно определить свои и собирать любые данные, 
которые можно получить с помощью SQL, включая какие-нибудь бизнес-метрики. 
 
https://habr.com/ru/company/selectel/blog/275803/
https://habr.com/ru/company/otus/blog/358588/

https://habr.com/ru/post/441136/ .  How to store metrics for a long time
https://habr.com/ru/company/funcorp/blog/445370/


Writing: Скорость накопления данных стремится к стабильной величине: обычно сервисы, которые вы мониторите, 
посылают примерно одинаковое количество метрик, и инфраструктура меняется относительно медленно. 

Integration with Grafana
https://grafana.com/dashboards/7901



https://utcc.utoronto.ca/~cks/space/blog/sysadmin/PrometheusGrafanaSetup-2019
https://habr.com/ru/post/482272/

https://github.com/danielfm/prometheus-for-developers
https://habr.com/ru/company/southbridge/blog/455290/
 https://habr.com/ru/company/itsumma/blog/350200/
 
В состав Prometheus входят следующие компоненты:
* сервер, который считывает метрики и сохраняет их в темпоральной (time series) базе данных;
* клиентские библиотеки для различных языков программирования (Go, Java, Python, Ruby, ...)
* Pushgateway — компонент для приёма метрик кратковременных процессов;
* PROMDASH — дашборд для метрик;
* инструменты для экспорта данных из сторонних приложений (Statsd, Ganglia, HAProxy и других);
* менеджер уведомлений AlertManager (на текущий момент находится на стадии бета-тестирования);
* клиент командной строки для выполнения запросов к данным.

Большинство из них написаны на Go, а совсем небольшая часть — на Ruby и Java. 

Все компоненты Prometheus взаимодействуют между собой по протоколу HTTP:

Сбор метрик в Prometheus осуществляется с помощью механизма pull. 
Имеется также возможность сбора метрик с помощью механизма push (для этого используется специальный компонент pushgateway, 
который устанавливается отдельно). Это может понадобиться в ситуациях, 
когда сбор метрики с помощью pull по тем или иным причинам невозможен: например, при наблюдении за сервисами, защищёнными фаерволлом. Также механизм push может оказаться полезным при наблюдении за сервисами, 
подключающихся к сети периодически и на непродолжительное время.
 
Prometheus использует pull модель сбора метрик: у него есть список экспортеров и он опрашивает их по HTTP, 
собирая с них список метрик и кладя их к себе в хранилище.


Экспортер — это агент, который занимается сбором метрик непосредственно с сущности 
(сервера в целом, или конкретного приложения), которую надо мониторить. 
У Prometheus богатые возможности для инструментации, поэтому экспортеры есть для большинства популярных приложений, 
и написать свой в случае надобности не представляет особого труда.

https://habr.com/ru/post/345370/
postgres_exporter работает следующим образом: он подключается к PostgreSQL, выполняет запросы к служебным таблицам 
и выставляет результаты в специальном формате с помощью внутреннего HTTP-сервера для забора их Prometheus'ом. 
Важный момент: помимо большого набора дефолтных запросов, можно определить свои и собирать любые данные, 
которые можно получить с помощью SQL, включая какие-нибудь бизнес-метрики. 
 
https://habr.com/ru/company/selectel/blog/275803/
https://habr.com/ru/company/otus/blog/358588/

https://habr.com/ru/post/441136/ .  How to store metrics for a long time
https://habr.com/ru/company/funcorp/blog/445370/


Writing: Скорость накопления данных стремится к стабильной величине: обычно сервисы, которые вы мониторите, 
посылают примерно одинаковое количество метрик, и инфраструктура меняется относительно медленно. 

Integration with Grafana
https://grafana.com/dashboards/7901

http://micrometer.io/ . JVM Application Monitoring
https://habr.com/ru/post/442080/

https://habr.com/ru/post/420633/ . GeoIP plotting (WorldMap)
https://habr.com/ru/post/412897/
