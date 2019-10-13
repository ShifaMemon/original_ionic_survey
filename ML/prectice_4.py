import pandas as pd
from sklearn import *
from sklearn import GaussianNB
from sklearn.model_selection import train_test_split

data = pd.read_csv('E:/SHIFA/MCA/SEM-5/precticals/ML/prectical_1/ds_1.csv')
print(data)

data['age'],class_age=pd.factorize(data['age'])
print(class_age)
print(data['age'].unique())

data['income'],class_income=pd.factorize(data['income'])
print(class_income)
print(data['income'].unique())

data['student'],class_student=pd.factorize(data['student'])
print(class_student)
print(data['student'].unique())

data['credit_rating'],class_credit_rating=pd.factorize(data['credit_rating'])
print(class_credit_rating)
print(data['credit_rating'].unique())

data['Buy_Computer'],class_comp=pd.factorize(data['Buy_Computer'])
print(class_comp)
print(data['Buy_Computer'].unique())

print(data)

x = data.iloc[::,-1]
print(x)
y=data.iloc[:,-1]
print(y)

x_train,x_test,y_train,y_test = train_test_split(x,y,rendom_state=0,test_split=0.3)
print(x_train)
pprint(x_test)
print(y_train)
print(y_test)

gnv = GaussianNB()
gnv.fit(x_train,y_train)

y_pred = gnv.predict(x_test)
print("\nafter prediction x_ test is::::\n\n",X_test)
print("\n\nPrediction of x test:::",y_pred)
count = (y_test!=y_pred).sum()
print(count)