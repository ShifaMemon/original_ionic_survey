import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn import *
from sklearn import metrics
from sklearn.neighbors import *

data= pd.read_csv('/home/mca/shifa/ML/prectical_6/prec6.csv')
print("dataset :",len(data),data.shape)
print(data)
print(data.info())

data['Flower Type'],class_Flower_Type=pd.factorize(data['Flower Type'])
print(class_Flower_Type)
print(data['Flower Type'].unique())

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
