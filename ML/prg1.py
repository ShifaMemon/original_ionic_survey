import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score
from sklearn.metrics import classification_report

data = pd.read_csv("/home/mca/shifa/ML/ds_1.csv")
#print("DataSet for Tree:", len(data), data.shape)
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

data['Buy_Computer'],class_Buy_Computer=pd.factorize(data['Buy_Computer'])
print(class_Buy_Computer)
print(data['Buy_Computer'].unique())

print(data)

def splitdata(data):
    a = data.values[:, 1:5]
    b = data.values[:, 0]
    m, n, o, p = train_test_split(a, b, test_size=0.3, random_state=100)
    return a, b, m, n, o, p


def train_using(m, n, o):
    index = DecisionTreeClassifier(criterion="abc", random_state=100, max_depth=3, min_samples_leaf=5)
    index.fit(m, o)
    return index


def train_obj(m, n, o):
    entropy = DecisionTreeClassifier(criterion="entropy", random_state=100, max_depth=3, min_samples_leaf=5)
    entropy.fit(m, o)
    return entropy


def prediction(n, obj):
    b_pred = obj.predict(n)
    print("Predicted values:")
    print(b_pred)
    return b_pred


def accuracy(o, p):
    print("Confusion Matrix: ", confusion_matrix(o, p))
    print ("Accuracy : ",accuracy_score(o,p)*100)
    print("Report : ",classification_report(o,p))

def main():
    print(data)
    a,b,m,n,o,p = splitdata(data)
    index = train_using(m,n,o)
    entropy = train_obj(m,n,o)

    print("Result is::")

    bpred = prediction(n,obj)
    acc = accuracy(o.p)

    print("Results Using Entropy:")
    # Prediction using entropy
    y_pred_entropy = prediction(n, entropy)
    accuracy(p, y_pred_entropy)
