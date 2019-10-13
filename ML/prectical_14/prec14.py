import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn import *
from sklearn import metrics
from sklearn.neighbors import *
data= pd.read_csv('/home/mca/shifa/ML/prectical_14/IRIS.csv')
print("dataset :",len(data),data.shape)
print(data)
print(data.info())
data['sepal_length'],class_sepal_length=pd.factorize(data['sepal_length'])
print(class_sepal_length)
print(data['sepal_length'].unique())


data['sepal_width'],class_sepal_width=pd.factorize(data['sepal_width'])
print(class_sepal_width)
print(data['sepal_width'].unique())

data['petal_length'],class_petal_length=pd.factorize(data['petal_length'])
print(class_petal_length)
print(data['petal_length'].unique())


data['petal_width'],class_petal_width=pd.factorize(data['petal_width'])
print(class_petal_width)
print(data['petal_width'].unique())

data['species'],class_species=pd.factorize(data['species'])
print(class_species)
print(data['species'].unique())
print(data)

X= data.iloc[:,:-1]
print(X)
y= data.iloc[:,-1]
print(y)

X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=0)

model=KNeighborsClassifier(n_neighbors=3)
model.fit(X_train,y_train)
y_pred=model.predict(X_test)
print(y_test)
print(y_pred)
print("accuracy is : ",metrics.accuracy_score(y_test,y_pred))
