<https://snarky.ca/why-you-should-use-python-m-pip/>.  python -m pip

<http://www.iakovlev.org/index.html?p=5791&m=1&l1=2> All Python in single page

<https://github.com/dabeaz-course/practical-python/blob/main/Notes/Contents.md>

<https://habr.com/ru/post/510294/> better python

<https://pythonspeed.com/articles/python-object-memory/>.  use slots !!! and other tips

<https://modelpredict.com/python-dependency-management-tools> 

<https://news.ycombinator.com/item?id=23386537> debugging


## with

<https://medium.com/better-programming/context-managers-in-python-go-beyond-with-open-as-file-85a27e392114>

## ML papers with code
https://paperswithcode.com/

<https://paperswithcode.com/paper/causalml-python-package-for-causal-machine> CasualML


## When not to use list

<https://habr.com/ru/company/otus/blog/510350/>.  set() tuple() queue() ... dict()

Lazy eval:
<https://medium.com/better-programming/how-to-create-lazy-attributes-to-improve-performance-in-python-b369fd72e1b6>

## yeld

https://medium.com/better-programming/python-7-advanced-features-that-you-may-not-know-about-generators-574a65fd6e45

<https://medium.com/livecodestream/how-to-use-generator-and-yield-in-python-c481cea097d7>

## Config
<https://whalesalad.com/blog/doing-python-configuration-right>

<https://tech.preferred.jp/en/blog/working-with-configuration-in-python/>

<https://news.ycombinator.com/item?id=22964910>. How to config the Python app

<https://news.ycombinator.com/item?id=22969375>


<https://habr.com/ru/company/yandex/blog/498856/> lectures

<https://github.com/gto76/python-cheatsheet>

<http://michal.karzynski.pl/blog/2019/07/15/top-20-talks-from-europython-2019/>

<https://towardsdatascience.com/tour-of-python-itertools-2af84db18a5e> itertools

<https://github.com/kellyjonbrazil/jello>  JSON util

<https://www.attrs.org/en/stable/>

```
 python -m py_compile my.py   # Check file syntax
 
 python -m json.tool my_json.json   # json buetifier
 
```
<https://medium.com/analytics-vidhya/6-exceptionally-common-pitfalls-of-python-exception-handling-44871d6afbc7> Error handling

```
import sys
print(sys.prefix) # '/System/Library/Frameworks/Python.framework/Versions/3.5'
import site
data = site.getsitepackages()
print(data)

pip install virtualenv
mkdir python-virtual-environments 
cd python-virtual-environments

# Python 2:
$ virtualenv env
 
# Python 3
$ python3 -m venv env
echo $PATH
source env/bin/activate
echo $PATH

pip install ...
...
deactivate
```
## Books

<https://pythonbooks.org/>

https://www.amazon.com/Practices-Python-Pro-Dane-Hillard/dp/1617296082

https://www.amazon.com/Serious-Python-Black-Belt-Deployment-Scalability-ebook/dp/B074S4G1L5

<https://github.com/pamoroso/free-python-books>

<https://docs.quantifiedcode.com/python-anti-patterns/index.html> antiputterns

<https://knowledgeisle.com/wp-content/uploads/2019/10/Serious-Python_-2019.pdf> Serious Python

<https://effectivepython.com/2019/10/22/memoryview-bytearray-zero-copy-interactions>  Effective Python 2nd ed

<http://shop.oreilly.com/product/0636920268505.do> High Performance Python

<https://www.amazon.com/Pro-Python-Features-Professional-Development-ebook/dp/B07PQBH4LL/>

<https://www.packtpub.com/programming/python-parallel-programming-cookbook> 

<https://www.amazon.com/gp/product/1617295981>   Classic Computer Science Problems in Python

<https://habr.com/ru/company/piter/blog/471520/> Книга «Классические задачи Computer Science на языке Python»

<https://github.com/zedr/clean-code-python/blob/master/README.md> Clean code

### Call Shell Commands with Python

<https://janakiev.com/blog/python-shell-commands/>

## Parsing
<https://tomassetti.me/parsing-in-python/> Parsing in Python

<https://github.com/thebjorn/pydeps> show dependency using graphviz


## Unicode, chardetect

<https://blog.emacsos.com/unicode-in-python.html>

<https://docs.python.org/2/howto/unicode.html>

<https://stackoverflow.com/questions/18034272/python-str-vs-unicode-types/18034409>

<https://medium.com/better-programming/strings-unicode-and-bytes-in-python-3-everything-you-always-wanted-to-know-27dc02ff2686>

chardetect header.txt
header.txt: SHIFT_JIS with confidence 0.99

<https://pypi.org/project/chardet/>

iconv -f SHIFT-JIS -t UTF-8 header.txt > header-UTF-8.txt

<https://gist.github.com/clarkb7/3e7e43ab85717e81925656f70f5bae8d>

```
print ( ''.join([x.encode('utf-8') for x in map(unichr, range(0x0107, 0x0187))]) )
```

## Binding

<https://iscinumpy.gitlab.io/post/tools-to-bind-to-python/>

## Creating Python Package

<https://realpython.com/courses/python-modules-packages/>

<https://pypi-package-example.readthedocs.io/en/latest/>

<https://github.com/pvcraven/pypi_package_example>

<https://habr.com/ru/post/483512/>

Python Entry Points Explained: <https://amir.rachum.com/blog/2017/07/28/python-entry-points/>

## ASGI 

<https://florimond.dev/blog/articles/2019/08/introduction-to-asgi-async-python-web/>


## Binary data
<https://reachtim.com/articles/reading-binary-data-with-python.html> . reading binary data with  python

https://habr.com/ru/company/ruvds/blog/485646/ . Python Tips

## live value plotter using Matplotlib:
<https://github.com/wahtak/develocorder>

<https://www.reddit.com/r/Python/comments/euf53h/dash_django_create_a_powerful_interactive/>

<https://github.com/facebookresearch/visdom> .  Plotting from Facebook research

##  zipapp (Python 3.5) module generates a zip file that can bundle your entire python project (including a virtual environment) and run it as an executable
<http://voorloopnul.com/blog/writing-self-contained-etl-pipeline-with-python/>

## multiprocessing vs threading
<https://habr.com/ru/company/otus/blog/501056/>
```
    import random
    import time
    from concurrent.futures import ProcessPoolExecutor, as_completed

    def hello():
        seconds = random.randint(0, 5)
        print(f"Start blocking for {seconds}s")
        time.sleep(seconds)
        print(f"Stopped blocking after {seconds}s")
        return seconds

    if __name__ == "__main__":

        with ProcessPoolExecutor(max_workers=2) as exec:

            a = exec.submit(hello)
            b = exec.submit(hello)

            for future in as_completed((a, b)):
                print(future.result())
		
```
<http://www.blog.pythonlibrary.org/2016/08/02/python-201-a-multiprocessing-tutorial/>

<https://www.packtpub.com/programming/python-parallel-programming-cookbook> 

<https://habr.com/ru/company/ruvds/blog/475246/>

<http://pljung.de/posts/easy-concurrency-in-python/> . concurrency

<https://zacs.site/blog/linear-python.html>

<https://www.integralist.co.uk/posts/python-asyncio/>

<https://trio.readthedocs.io/en/stable/> asyncio alternative

<https://lucumr.pocoo.org/2020/1/1/async-pressure/>

multiprocessing vs threading
<https://sumit-ghosh.com/articles/multiprocessing-vs-threading-python-data-science/>

<https://habr.com/ru/post/485236/> . Конфигурационные файлы в Python

## Stats / Numpy

<https://realpython.com/pandas-python-explore-dataset/>

<https://realpython.com/python-statistics/>

<https://pbpython.com/natural-breaks.html>

## Other topics

```python -m json.tool my_json.json```

<https://habr.com/ru/company/otus/blog/490244/> .  ctypes

### Requests lib

<https://findwork.dev/blog/advanced-usage-python-requests-timeouts-retries-hooks/> . requests lib

<https://requests.readthedocs.io/en/master/user/advanced/>

<https://toolbelt.readthedocs.io/en/latest/>



<https://florimond.dev/blog/articles/2018/10/reconciling-dataclasses-and-properties-in-python/> DataClasses

<https://github.com/benfred/py-spy>  py-spy: Sampling profiler for Python programs

<https://opensource.com/article/19/11/awk-to-python>

<https://habr.com/ru/company/edison/blog/474622/> . Libs

<http://blog.rtwilson.com/five-new-ish-python-things-part-1/> 

<https://habr.com/ru/company/ruvds/blog/472858/> request

<https://pydantic-docs.helpmanual.io/> . data validation

## Logging

<https://kanoki.org/2019/10/16/python-logging/> 

https://julien.danjou.info/how-to-log-properly-in-python/

## Unclassified

<https://news.python.sc/> daily feed

<https://dev.libreneitor.com/expert-python-topics-you-should-know/>

<https://www.blog.duomly.com/20-essential-python-tips-and-tricks-you-should-know/>

<https://pysnakeblog.blogspot.com/>

<https://blog.richard.do/2019/10/17/supercharge-your-python-testing-workflow/> . Testing

<https://habr.com/ru/post/471618/> C++ fropm python

## Python tools
<https://cjolowicz.github.io/posts/hypermodern-python-01-setup/>

<https://pip.pypa.io/en/stable/user_guide/>

<https://spiegelmock.com/2020/01/04/python-2020-modern-best-practices/>

### pyenv

<https://github.com/pyenv/pyenv>

<https://dev.to/writingcode/the-python-virtual-environment-with-pyenv-pipenv-3mlo>

<https://khashtamov.com/ru/pyenv-python/>

<https://virtualenv.pypa.io/en/latest/> 
pyenv, poetry, black, flake8, isort, pre-commit, pytest, coverage, tox, Azure Pipelines, sphinx, and readthedocs:

<https://medium.com/georgian-impact-blog/python-tooling-makes-a-project-tick-181d567eea44>

## Slots
<https://habr.com/ru/company/ruvds/blog/480356/>
```
Если вы когда-нибудь писали программы, которые создают по-настоящему большие количества экземпляров некоего класса, то вы могли заметить, что таким программам неожиданно может понадобиться очень много памяти. Происходит это из-за того, что Python использует словари для представления атрибутов экземпляров классов. Это хорошо сказывается на производительности, но, с точки зрения потребления памяти, это неэффективно. Обычно, правда, проблем эта особенность не вызывает. Однако если вы столкнулись в подобной ситуации с нехваткой памяти — можете попробовать воспользоваться атрибутом __slots__:

class Person:
 __slots__ = ["first_name", "last_name", "phone"]
 def __init__(self, first_name, last_name, phone):
  self.first_name = first_name
  self.last_name = last_name
  self.phone = phone

Здесь, когда мы объявляем атрибут __slots__, Python использует для хранения атрибутов не словарь, а маленький массив фиксированного размера. Это серьёзно сокращает объём памяти, необходимый для каждого из экземпляров класса. У применения атрибута __slots__ есть и некоторые недостатки. Так, пользуясь им, мы не можем объявлять новые атрибуты, мы ограничены только теми, которые имеются в __slots__. Кроме того, классы c атрибутом __slots__ не могут использовать множественное наследование.
```
## Import

<https://www.pythonforthelab.com/blog/complete-guide-to-imports-in-python-absolute-relative-and-more/>

<http://python-notes.curiousefficiency.org/en/latest/python_concepts/import_traps.html>

## Collections:NamedTuples (but better use Dataclasses in Python 3.7!) , Counter, DefaultDict, OrderedDict
<https://habr.com/ru/post/478934/>

## defaultdict

Task: group words by their 1st letter.
The structure we’re looking for here is a dictionary of lists, 
having the initials as key and a list of words as value, something like this:
```
{
	"a": ["all", "although", "average"],
	"b": ["best", "both"],
    ...
}
```
Solution without defaultdict
```
text = 'a long text but very interesting and fun'

data = {}
# Cycle through each word, appending it to the correct list
for word in text.split(" "):
    if word[0] in data:
        data[word[0]].append(word)
    else:
        data[word[0]] = [word]
```
Solution without defaultdict:
we completely removed the if check  because we replaced the dictionary with a defaultdict, 
specifying list as the default value ( meaning an empty list ).
```
from collections import defaultdict
text = 'a long text but very interesting and fun'

data = defaultdict(list)
# Cycle through each word, appending it to the correct list
for word in text.split(" "):
    data[word[0]].append(word)
```
## Counter
 count the number of occurrences of each word in a text. With the Counter class, this is easily accomplished:
```
from collections import Counter
text = 'and another long text but interesting and fun'

c = Counter()
for word in text.split(" "):
  c[word] += 1
print(c)
```
Actually we can do even better using the Counter’s constructor:
```
from collections import Counter
text = 'and another long text but interesting and fun'
c = Counter(text.split(" "))
print(c)
```
The most_common method: Print the 3 most common words, along with their count
```
print(c.most_common(3))
```

<https://gto76.github.io/python-cheatsheet/>

<https://github.com/sharpden/python-infrastructure>

<https://seddonym.me/2019/08/03/ioc-techniques/> inversion of control

How to start python http server:

python -m SimpleHTTPServer <8000> (python2)

python3 -m http.server <8000> (python3)



<https://habr.com/ru/post/426277/>

<https://habr.com/ru/post/457348/> . deploying from github to PythonAnyware

<https://www.techrepublic.com/google-amp/article/how-netflix-uses-python-streaming-giant-reveals-its-programming-language-libraries-and-frameworks/>

<https://habr.com/ru/post/462179/> f-strings (Python > 3.6)

<https://www.blog.duomly.com/20-essential-python-tips-and-tricks-you-should-know/>


### Use Jinja template to generate dynamic SQL
<https://medium.com/analytics-and-data/jinja-the-sql-way-of-the-ninja-9a64fc815564> (see pdf file in this folder)


```
from jinja2 import Template
template = Template('Hello {{ name }}!')
x=template.render(name='John Doe')
print(x)

template2 = Template(
"""
Static  begin
<ul>
{% for user in users %}
 x= {{ user.x }}
 y= {{ user.y }}
{% endfor %}
Static end
"""
)

m_users=list()

user1={
 "x": 22,
 "y": 10,
  "pose": "sitting",
}
user2={
 "x": 220,
 "y": 100,
  "pose": "sitting",
}
m_users.append(user1)
m_users.append(user2)

print (user1)
print (user2)


y=template2.render(users = m_users)
print(y)
```

