 <https://medium.com/@leventov/smoothiemap-2-the-lowest-memory-hash-table-ever-6bebd06780a3> .   Hash Tables comparisons
 
 <https://advancedweb.hu/a-categorized-list-of-all-java-and-jvm-features-since-jdk-8-to-14/>
 
 <https://habr.com/ru/post/471772/> How Java works
 
 <https://habr.com/ru/post/510618/> Java Memory Model
 
 <https://habr.com/ru/company/otus/blog/478584/> . JVM internals
 
 <https://habr.com/ru/company/domclick/blog/500646/> Java bytecode internals
 
 <https://www.youtube.com/watch?v=RtHA1YVLW5Y> JVM does this?
 
 <https://jokerconf.com/2019/talks/> . Java Conf
 
 <https://youtu.be/qurG_J81_Cs> Pattern matching
 
 <https://habr.com/ru/post/479478/> . каркас приложения на Java >9 с поддержкой динамической загрузки плагинов 
 
 An executable JAR is a just regular archive, with an included META-INF/manifest file 
 that says which "main" class should be the entry point. 
 The JRE knows to look for this manifest file.
 
 Run with the parameter:
 
 java.exe -jar  name.jar
 
 ## JDBC etc
 
 https://www.marcobehler.com/guides/java-databases-jdbc-hibernate-spring-data
 
 ## Promises vs Observables
 Both Promises and Observables will help us work with the asynchronous functionalities in JavaScript.

The main differences between them are listed below:
```
Promise:
Promises are values that will resolve in asynchronous ways like http calls
They have one pipeline
They are usually only use with async data return
They are not easy to cancel

Observable:

Observables deal with a sequence of asynchronous events
They are cancellable
They are retriable by nature such as retry and retryWhen
They stream data in multiple pipelines
They have array-like operations like map, filter etc.
They can be created from other sources like events
They are functions, which could be subscribed later on
```

From here: <https://habr.com/ru/company/piter/blog/466529/>
Чтобы байт-код Java выполнял какую-либо конкретную работу, есть 3 возможности заставить его это сделать:

* Непосредственно выполнить промежуточный код. Лучше и правильнее сказать, что его нужно «интерпретировать». В JVM есть интерпретатор языка Java. Как вы знаете, для работы JVM нужно запустить программу “java”.

* Непосредственно перед выполнением промежуточного кода скомпилировать его в нативный код и заставить CPU выполнить этот свежеиспеченный нативный код. Таким образом, компиляция происходит прямо перед выполнением (Just in Time) и называется «динамической».

* Самым первым делом, еще до запуска программы, промежуточный код переводится в нативный и прогнать его через CPU с начала до конца. Такая компиляция производится перед выполнением и называется AoT (Ahead of Time).


Итак, (1) – это работа интерпретатора, (2) — результат JIT-компиляции и (3) — результат AOT-компиляции.

Ради полноты картины упомяну, что существует и четвертый подход – напрямую интерпретировать исходный код, но в Java так не принято. Так делается, например, в Python.

Теперь давайте разберемся, как “java” работает в качестве (1) интерпретатора (2) JIT-компилятора и/или (3) AOT-компилятора – и когда.

Если коротко – как правило, “java” делает и (1), и (2). Начиная с Java 9 возможен и третий вариант. 
