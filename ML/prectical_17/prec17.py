import pandas as pd
import numpy as np
from sklearn.cluster import KMeans
from sklearn.preprocessing import LabelEncoder

train_url = "http://s3.amazonaws.com/assets.datacamp.com/course/Kaggle/train.csv"
train = pd.read_csv(train_url)

test_url = "http://s3.amazonaws.com/assets.datacamp.com/course/Kaggle/test.csv"
test = pd.read_csv(test_url)

print("Train Data::\n\n",train.head())
print("Test Data::\n\n",test.head())
train.describe()

#put the min insted of NAN values which is numeric
train.fillna(train.min,inplace=True)
test.fillna(test.min,inplace=True)

#delete the NAN values
train = train.drop(['Name','Ticket','Cabin','Embarked'],axis=1)
test = test.drop(['Name','Ticket','Cabin','Embarked'],axis=1)

#converting sting to numeric
# lableEncoder = LabelEncoder()
# lableEncoder.fit(train['Sex'])
# lableEncoder.fit(test['Sex'])float() argument must be a string or a number, not 'method'
# train['Sex']=lableEncoder.transform(train['Sex'])
# test['Sex']=lableEncoder.transform(test['Sex'])

labelEncoder = LabelEncoder()
labelEncoder.fit(train['Sex'])
labelEncoder.fit(test['Sex'])
train['Sex'] = labelEncoder.transform(train['Sex'])
test['Sex'] = labelEncoder.transform(test['Sex'])


#x = np.array(train.drop(['Survived'],1).astype(float))
x = np.array(train.drop(['Survived'], 1).astype(float))
kmeans = KMeans(n_clusters=2)
kmeans.fit(x)

print(kmeans.labels_)
