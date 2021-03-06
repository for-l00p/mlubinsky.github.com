<http://scidavis.sourceforge.net/>

<https://ljvmiranda921.github.io/notebook/2020/03/16/jupyter-notebooks-in-2020-part-2/>

https://habr.com/ru/company/ruvds/blog/505624/. HiSpeed DataFrames: Dask Vuex

<https://habr.com/ru/post/500162/>

<https://www.dataschool.io/cloud-services-for-jupyter-notebook/>

<https://habr.com/ru/post/485318/> Добавляем в Jupyter Notebooks красоту и интерактивность

<https://youtu.be/0Ol3QkdCyAk>. Pair Plot for multivariable analysis

<https://livecodestream.dev/post/2020-07-23-interactive-data-visualization-using-plotly-and-python/> Plotly

### Pandas
<https://habr.com/ru/company/ruvds/blog/492220/>. Pandas

https://habr.com/ru/company/ruvds/blog/500428/

<https://habr.com/ru/post/475210/>. Pandas

## Virtual env in Jupyter Notebook
https://janakiev.com/blog/jupyter-virtual-envs/

# Jupyter Pandas NumPy Scikit

<https://habr.com/ru/company/plarium/blog/512332/>. scikit

<https://www.youtube.com/playlist?list=PL5-da3qGB5IBITZj_dYSFqnd_15JgqwA6>

<https://towardsdatascience.com/pandas-tips-that-will-save-you-hours-of-head-scratching-31d8572218c9>

<https://medium.com/jbennetcodes/how-to-use-pandas-to-access-databases-e4e74e6a329e> . Access Databases from Panda

<https://kanoki.org/2020/01/21/pandas-dataframe-filter-with-multiple-conditions/> filter dataframes

<https://towardsdatascience.com/integrate-jupyter-into-your-data-pipeline-9a02fab3cee5>

<https://hi-bumblebee.com/> Visually explore and analyze Big Data from any Jupyter Notebook
```
jupyter notebook
http://localhost:8888/tree

https://realpython.com/python-statistics/
https://realpython.com/pandas-python-explore-dataset/

import math
import statistics
import numpy as np
import scipy.stats
import pandas as pd


to do:
there are 100 cvs files without headers6 columns;   group them by 1st digits in 10 groups
make report with columns:
    file_name 
    # of records
    col1 min/max/avg
    col2 min/max/avg
    ..
    col6 min/max/avg

import glob
files= glob.glob('./*.csv')
files.sort() 
print(files)

col_names =  ['file', 'records', 'aX-avg','aY-avg','aZ-avg','gX-avg','gY-avg','gZ-avg' ]
# https://stackoverflow.com/questions/13784192/creating-an-empty-pandas-dataframe-then-filling-it

summary_frame = pd.DataFrame(columns=col_names)
frames={}
for f in files:
   print (f)
   df = pd.read_csv('1_1.csv', delimiter = ',', header=None, names=['aX','aY','aZ','gX','gY','gZ'])
   frames[f] = df
   n_records=len(frames[f])
   summary_frame.loc[len(summary_frame)]=[
            f, 
	    n_records, 
            df["aX"].mean(), 
            df["aY"].mean(), 
            df["aZ"].mean(),
            df["gX"].mean(), 
            df["gY"].mean(), 
            df["gZ"].mean()  
	    ]
	    
import glob
files= glob.glob('./*.csv')
files.sort() 
print(files)	    

print("file, n_records, aX_mean, aX_min, aX_max,  aY_mean, aY_min, aY_max, aZ_mean, aZ_min, aZ_max, gX_mean, gX_min, gX_max,  gY_mean, gY_min, gY_max, gZ_mean, gZ_min, gZ_max")
for f in files:
   df = pd.read_csv(f, delimiter = ',', header=None, names=['aX','aY','aZ','gX','gY','gZ'])
   print( f, s, len(df), s,
            df["aX"].mean(), s,  df["aX"].min(), s, df["aX"].max(), s,
            df["aY"].mean(), s,  df["aY"].min(), s, df["aY"].max(), s,
            df["aZ"].mean(), s,  df["aZ"].min(), s, df["aZ"].max(), s,
            df["gX"].mean(), s,  df["gX"].min(), s, df["gX"].max(), s,
            df["gY"].mean(), s,  df["gY"].min(), s, df["gY"].max(), s,
            df["gZ"].mean(), s,  df["gZ"].min(), s, df["gZ"].max() 
```


To convert the data to parquet we are going to use pandas to read the csv and store it in one large parquet file:
```
import glob
import pandas as pd

files = glob.glob("input/yellow_tripdata_2018-*.csv")

def read_csv(filename):
    return pd.read_csv(
        filename,
        dtype={"store_and_fwd_flag": "bool"},
        parse_dates=["tpep_pickup_datetime", "tpep_dropoff_datetime"],
        index_col=False,
        infer_datetime_format=True,
        true_values=["Y"],
        false_values=["N"],
    )
dfs = list(map(read_csv, files))
df = pd.concat(dfs)
df.to_parquet("yellow_tripdata_2018.parquet")

The resulting parquet file has a size of 2.2GiB, while the sum of the original CSV files was 11GiB. 
Pandas supports two parquet implementations, fastparquet and pyarrow. They both have strengths and weaknessess
```
<http://peter-hoffmann.com/2020/understand-predicate-pushdown-on-rowgroup-level-in-parquet-with-pyarrow-and-python.html>
 
 
 <https://habr.com/ru/post/486756/> .  pandas example : reads CSVs,JSOns combines, filter them

## Jupyter Enterprise Gateway 

<https://blog.jupyter.org/introducing-jupyter-enterprise-gateway-db4859f86762>

<https://jupyter-enterprise-gateway.readthedocs.io/en/latest/getting-started.html>

<https://jupyter-docker-stacks.readthedocs.io/en/latest/using/selecting.html>

<https://github.com/jupyterhub/jupyterhub-deploy-docker>








<https://realpython.com/python-statistics/>

<https://realpython.com/pandas-python-explore-dataset/>

<https://pbpython.com/natural-breaks.html>

<https://www.aicheatsheets.com/>

<https://jakevdp.github.io/PythonDataScienceHandbook/>

<http://www.scikit-yb.org/en/latest/index.html> . Yellowbrick extends the Scikit-Learn API to make model selection and hyperparameter tuning easier. Under the hood, it’s using Matplotlib.

<https://cloudblogs.microsoft.com/opensource/2019/10/10/microsoft-open-sources-sanddance-visual-data-exploration-tool/>       SandDance   visualization tool from Microsoft Research

<https://kanoki.org/2019/10/09/working-with-pandas-datetime/> Working with timeseries in Pandas

<https://habr.com/ru/post/460557/>

<https://habr.com/ru/post/470864/> Web UI for Jupiter 

<https://habr.com/ru/post/469355/> NumPy

<https://www.udemy.com/deep-learning-prerequisites-the-numpy-stack-in-python> free course

https://www.reddit.com/r/Python/comments/cop2cr/new_data_visualization_with_python_course_up_on/>

<https://habr.com/ru/post/460321/> ML Notebooks

<https://habr.com/ru/post/460445/> Signal Processing

<https://realpython.com/courses/idiomatic-pandas-tricks-features-you-may-not-know/>

<https://habr.com/ru/company/mailru/blog/445834/>

 Jake Vanderplas . <https://jakevdp.github.io/PythonDataScienceHandbook/>
 
 df.info()    df.types()   df.index    df.dtypes df.shape  df.describe() df.columns() 
 
## Cloud Notebooks 
 
 <https://www.dataschool.io/cloud-services-for-jupyter-notebook/amp/> . Jupyter Notebook in the cloud
 
 <https://medium.com/machine-learning-world/useful-snippets-for-google-colaboratory-free-gpu-included-d976d6b3e6de>
 
## Plotting the time series


<https://www.dataquest.io/blog/tutorial-time-series-analysis-with-pandas/> . Time Series

<https://chrisalbon.com/python/data_wrangling/pandas_time_series_basics/>

<https://machinelearningmastery.com/time-series-data-visualization-with-python/>

<https://jakevdp.github.io/PythonDataScienceHandbook/03.11-working-with-time-series.html>

<https://machinelearningmastery.com/resample-interpolate-time-series-data-python/>

The Series Pandas object provides an interpolate() function to interpolate missing values

Between time:
<https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.Series.between_time.html>

https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.DataFrame.between_time.html#pandas.DataFrame.between_time
```
from datetime import datetime
# example of formatting
date = datetime.strptime('01 Jan 2016', '%d %b %Y')
print(date)
date = datetime.strptime('2017-05-04',"%Y-%m-%d")
print(date)

# generate the date objects: 2 points per day  for entire year
from datetime import timedelta  
i=0
times=[]
v=[]
date = datetime.strptime('01 Jan 2016', '%d %b %Y')

while i < 365:
  new_date= date+timedelta(hours=i*12) 
  print (i, new_date, new_date.month)  # new point every 12 hours
  times.append(new_date)
  v.append ( new_date.month)
  i+=1  
  
  
df = pd.DataFrame({'keys':times,'vals':v})  

# Grouping

# Group by Month
df.index=df["keys"]
per_month=df.groupby(pd.Grouper(freq='M'))

print (type(per_month))
print (per_month.sum())
print (type(per_month.sum()))

# Group by day of week
day_of_week= df.groupby(df.index.dayofweek).sum()

# Group by Day
per_day=df.groupby(pd.Grouper(freq='D')) - does not require index, can use several columns in groupby
per_day_sum=per_day.sum()

per_day_sum= df.resample('D').sum() --- consider this instead line above, requires df.index = DateTimeIndex

#   Plotting

import matplotlib.pyplot as plt

## Plot 1
per_day_sum.plot()

## Plot 2
df.resample('D').sum().plot()  

## Plot 3
X=per_day_sum.index
Y=per_day_sum.values
plt.plot(X,Y)
plt.show() . # issue - ticks and X labels

## Split data in separate dataframes per month

first_days = [
  datetime.date (2016, 1,1),
  datetime.date (2016, 2,1),
  datetime.date (2016, 3,1),
  datetime.date (2016, 4,1),
  datetime.date (2016, 5,1),
  datetime.date (2016, 6,1),
  datetime.date (2016, 7,1),
  datetime.date (2016, 8,1),
  datetime.date (2016, 9,1),
  datetime.date (2016, 10,1),
  datetime.date (2016, 11,1),
  datetime.date (2016, 12,1)
  ]
  
  
from pandas.tseries.offsets import MonthEnd
from datetime import timedelta 

 

per_month={}
for first_day in first_days:
    last_day=first_day+MonthEnd(1)+timedelta(hours=23, minutes=59, seconds=59)
    m=first_day.strftime('%b') . # human-readable month
    per_month[m]=per_day_sum[first_day : last_day]

# I think it is better then code above
daily_per_month={}
Month=['Jan','Feb','Mar','Apr','May','Jun','Jul','Aug','Sep', 'Oct','Nov','Dec']
for i in range(0,12):
    print (i, Month[i])
    m=Month[i]
    daily_per_month[m] = per_day_sum[per_day_sum.index.month==i+1]


# Plot every month on separate figure:
per_month.plot(subplots=True, legend=True)
plt.show()

# Plot every month on the same figure:
fig, ax = plt.subplots()

for k, v in per_month.items():
 x = v.index.day
 y = v.y.values  
 ax.plot(x, y, label=k)

ax.legend(loc='upper left', frameon=False)


# Group by day of week within the month
# Make new df with index in [0-6] - (Monday-Sunday]
v=per_month['Jan']
v.rename(columns={'y': 'Jan'}, inplace=True)
df_per_dayofweek=v.groupby(v.index.dayofweek).sum()

for k, v in per_month.items():
    if k != 'Jan':
       d=v.groupby(v.index.dayofweek).sum()
       d.rename(columns={'y': k}, inplace=True)

       df_per_dayofweek = pd.merge(df_per_dayofweek, d, on='ds' )

print (df_per_dayofweek)  

df_per_dayofweek.plot.bar(rot=0)
```

## Group By and resample

<https://pbpython.com/pandas-grouper-agg.html>
<http://benalexkeen.com/resampling-time-series-data-with-pandas/>
if you were interested in summarizing all of the sales by month, you could use the resample function. 

The tricky part about using resample is that it only operates on an index.  In order to make it work, use set_index to make the date column an index and then resample:
```
df.set_index('date').resample('M')["ext price"].sum() .      monthly

weekly_summary = pd.DataFrame()
weekly_summary['speed'] = df["speed"].resample('W').mean() .  weekly mean
weekly_summary['price'] = df["preice"].resample('W').mean() .  weekly mean
```
<http://cmdlinetips.com/2019/03/how-to-write-pandas-groupby-function-using-sparse-matrix/>

GroupBy() is not based on dataframe  index. 


https://www.kaggle.com/learn/overview  Pandas, TensorFlow, etc

<https://github.com/Yorko/mlcourse_open/tree/master/jupyter_russian>     Jupiter Russian notebooks

<https://github.com/jupyter/jupyter/wiki/A-gallery-of-interesting-Jupyter-Notebooks#statistics-machine-learning-and-data-science>

<https://radimrehurek.com/data_science_python/>

<https://github.com/hangtwenty/dive-into-machine-learning>

<https://sadanand-singh.github.io/posts/pyplotsmultivariables/>


## Scikit-learn
<https://medium.com/analytics-vidhya/scikit-learn-a-silver-bullet-for-basic-machine-learning-13c7d8b248ee>

<https://habr.com/ru/post/456294/> One Hot Encoding

<https://www.youtube.com/watch?v=irHhDMbw3xo> categorical encoding

<https://www.youtube.com/watch?v=L7R4HUQ-eQ0>

<http://scikit-learn.org/stable/tutorial/>

<https://www.interviewqs.com/blog/intro_to_scikit_learn>

<https://stackoverflow.com/questions/40845304/runtimewarning-numpy-dtype-size-changed-may-indicate-binary-incompatibility>

## Linear model
```
import warnings
warnings.filterwarnings("ignore", message="numpy.dtype size changed")
warnings.filterwarnings("ignore", message="numpy.ufunc size changed")
```
```
import matplotlib.pyplot as plt
from sklearn import linear_model
import numpy as np
from sklearn.metrics import mean_squared_error, r2_score
# data:
ar = np.array([[[1],[2],[3]], [[2],[4],[6]]]) # y=2*x
x = ar[0,:]
y = ar[1,:]

reg = linear_model.LinearRegression()
reg.fit(x,y)
print('Coefficients: \n', reg.coef_)

xTest = np.array([[4],[5],[6]])
ytest =  np.array([[8],[10],[12]])
preds = reg.predict(xTest)
print("Mean squared error: %.2f" % mean_squared_error(ytest,preds))
print("Variance score: %.2f" % r2_score(ytest,preds))
plt.scatter(xTest,preds, color='black')
plt.plot(xTest,preds,color='blue', linewidth=3)

plt.show()
```

## NumPy 
```
http://scipy.github.io/old-wiki/pages/NumPy_for_Matlab_Users.html
https://realpython.com/numpy-array-programming/	
http://nbviewer.jupyter.org/github/vlad17/np-learn/blob/master/presentation.ipynb?flush_cache=true NumPy
http://www.labri.fr/perso/nrougier/from-python-to-numpy/
https://docs.scipy.org/doc/numpy-1.10.0/user/basics.broadcasting.html
https://www.analyticsvidhya.com/blog/2017/02/top-28-cheat-sheets-for-machine-learning-data-science-probability-sql-big-data/
http://www.labri.fr/perso/nrougier/teaching/numpy.100/index.html
https://www.datacamp.com/community/tutorials/python-numpy-tutorial
https://www.dataquest.io/blog/numpy-tutorial-python/
https://www.python-course.eu/numpy.php
https://github.com/Kyubyong/numpy_exercises
http://heydenberk.com/blog/posts/demystifying-pandas-numpy-filtering/
http://cs231n.github.io/python-numpy-tutorial/
https://github.com/HIPS/autograd
https://www.machinelearningplus.com/101-numpy-exercises-python/
```
## Pandas
```
https://stackoverflow.com/questions/29432629/correlation-matrix-using-pandas

https://habr.com/ru/company/ruvds/blog/451478/ 
bиблиотекa pandas-profiling. Результаты её работы выражаются не в виде неких отдельных показателей, а в форме довольно подробного HTML-отчёта, содержащего большую часть тех сведений об анализируемых данных, которые может понадобиться знать перед тем, как приступать к более плотной работе с ними.


http://www.dataschool.io/easier-data-analysis-with-pandas/
https://news.ycombinator.com/item?id=16473482
http://nbviewer.jupyter.org/github/pybokeh/jupyter_notebooks/blob/master/pandas/PandasCheatSheet.ipynb
https://jakevdp.github.io/PythonDataScienceHandbook/
https://www.kaggle.com/learn/data-visualisation
https://medium.com/dunder-data/selecting-subsets-of-data-in-pandas-6fcd0170be9c
https://spapas.github.io/2016/09/21/pandas-pivot-table-primer/
https://github.com/JosPolfliet/pandas-profiling
https://www.dataquest.io/blog/pandas-concatenation-tutorial/
https://towardsdatascience.com/how-to-learn-pandas-108905ab4955
http://blog.enthought.com/python/pandas/cheat-sheets-pandas-the-python-data-analysis-library/#.WjSdBlQ-dp9
https://habrahabr.ru/company/ods/blog/322626/
https://www.dataquest.io/blog/pandas-big-data/
https://www.dataquest.io/blog/machine-learning-python/
https://github.com/rlabbe/Kalman-and-Bayesian-Filters-in-Python
http://hypertools.readthedocs.io/en/latest/index.html
	
http://www.zavtech.com/morpheus/docs/  DataFrames in Java
```
