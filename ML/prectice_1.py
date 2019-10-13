import pandas as pd
import graphviz
from sklearn import *
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

dtree = tree.DecisionTreeClassifier()
print(dtree)

classifier = 'entropy'
dtree.fit(x_train,y_train)
prediction = dtree.predict(x_test)

print("prediction : ",prediction)

feature_name = x.columns
dot_data = export.graphviz(dtree,class_name=class_comp,feature_names=feature_name,out_filled=NONE,filled=True)
graph=graphviz.Source(dot_data)
graph.rander()

misclassifier = (y_test!=prediction.sum)
print(misclassifier)