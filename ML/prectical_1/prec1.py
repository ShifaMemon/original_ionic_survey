import pandas as pd
from sklearn import *
import graphviz
from sklearn.model_selection import train_test_split


#data = pd.read_csv("/home/mca/shifa/ML/ds_1.csv", sep=',', header=None)
#print("DataSet for Tree:", len(data), data.shape)
data=pd.read_csv('/home/mca/shifa/ML/prectical_1/ds_1.csv')
print(data)

#convert string to numeric of column
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

data['Buy_Computer'],class_Buy_Computer=pd.factorize(data['Buy_Computer'])
print(class_Buy_Computer)
print(data['Buy_Computer'].unique())

print(data)

X = data.iloc[:,:-1]
print(X)

y = data.iloc[:,-1]
print(y)

#x = terget data , y = test data
X_train,X_test,y_train,y_test = train_test_split(X,y,test_size=0.3,random_state=0) 
print(X_train) #train thayela deta aavse
print(X_test)
print(y_test)# jetla baki rai gaya 6 e test ma jase aama 6 baki che so e test mate gaya

dtree = tree.DecisionTreeClassifier()
print(dtree)

criterion = 'entropy'
dtree.fit(X_train,y_train)
y_prediction = dtree.predict(X_test) #target ne test data upr prediction krse

feature_names = X.columns
dot_data = tree.export_graphviz(dtree,out_file=None,filled=True,rounded=True,feature_names=feature_names,class_names=class_Buy_Computer)
graph = graphviz.Source(dot_data)
graph.render('/home/mca/shifa/ML/prectical_1/test.gv',view=True)

count_misclassified = (y_test!=y_prediction.sum)
print(count_misclassified)
