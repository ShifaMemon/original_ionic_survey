import pandas as pd
from sklearn import *
from sklearn.naive_bayes import GaussianNB
from sklearn.model_selection import train_test_split


#data = pd.read_csv("/home/mca/shifa/ML/ds_1.csv", sep=',', header=None)
#print("DataSet for Tree:", len(data), data.shape)
data = pd.read_csv('/home/mca/shifa/ML/prectical_1/ds_1.csv')
print(data)

#convert string to numeric of column
data['age'],class_age=pd.factorize(data['age'])
print(class_age)
#print(data['age'].unique())

data['income'],class_income=pd.factorize(data['income'])
print(class_income)
#print(data['income'].unique())

data['student'],class_student=pd.factorize(data['student'])
print(class_student)
#print(data['student'].unique())

data['credit_rating'],class_credit_rating=pd.factorize(data['credit_rating'])
print(class_credit_rating)
#print(data['credit_rating'].unique())

data['Buy_Computer'],class_Buy_Computer=pd.factorize(data['Buy_Computer'])
print(class_Buy_Computer)
#print(data['Buy_Computer'].unique())

print(data)

X = data.iloc[:,:-1]
print(X)

y = data.iloc[:,-1]
print(y)

X_train,X_test,y_train,y_test = train_test_split(X,y,test_size=0.3,random_state=0)

gnv = GaussianNB()
gnv.fit(X_train,y_train)

y_pred = gnv.predict(X_test)
print("\nafter prediction x_ test is::::\n\n",X_test)
print("\n\nPrediction of x test:::",y_pred)
count = (y_test!=y_pred).sum()
print(count)

test = gnv.predict([[15,0,2,0,0]])
print(test)
