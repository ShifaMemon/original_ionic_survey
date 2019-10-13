import pandas as pd
from sklearn import *
from sklearn.naive_bayes import GaussianNB
from sklearn.model_selection import train_test_split

data = pd.read_csv("/home/mca/shifa/ML/prectical_22/diabetes.csv")
print(data)

x = data.iloc[:,:-1]
print(x)

y = data.iloc[:,-1]
print(y)

x_train,x_test,y_train,y_test = train_test_split(x,y,test_size=0.3,random_state=0)

gnv = GaussianNB()
gnv.fit(x_train,y_train)

print("\n x_test before prediction:: \n",x_test)
y_pred = gnv.predict(x_test)
print("\n x_test After prediction::\n",x_test)
print("\n prediction value is:",y_pred)

count = (y_test!=y_pred).sum()
print(count)

print("accuracy is : ",metrics.accuracy_score(y_test,y_pred))

