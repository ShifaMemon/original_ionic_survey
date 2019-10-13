import pandas as pd
from sklearn import metrics
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier

data=pd.read_csv('/home/mca/shifa/ML/prectical_2/tennis.csv')
print("dataset :",len(data),data.shape)
print(data)
print(data.info())

data['outlook'],class_outlook=pd.factorize(data['outlook'])
print(class_outlook)
print(data['outlook'].unique())


data['temp'],class_temp=pd.factorize(data['temp'])
print(class_temp)
print(data['temp'].unique())

data['humidity'],class_humidity=pd.factorize(data['humidity'])
print(class_humidity)
print(data['humidity'].unique())


data['windy'],class_windy=pd.factorize(data['windy'])
print(class_windy)
print(data['windy'].unique())

data['play'],class_play=pd.factorize(data['play'])
print(class_play)
print(data['play'].unique())
print(data)

X= data.iloc[:,:-1]
print(X)

y = data.iloc[:,-1]
print(y)



X_train,X_test,y_train,y_test = train_test_split(X,y,test_size=0.3,random_state=0)
print(X_train) #train thayela deta aavse
print("\n X_test print:\n",X_test)
print("\n Y_test print:\n",y_test)

#creating model
model = KNeighborsClassifier(n_neighbors=3)
model.fit(X_train,y_train)

y_pred = model.predict(X_test)
print("\n Test data of X:\n\n",X_test)#target ne test data upr prediction
print("\n Y_test print:\n",y_test)
print("\n Model Prediction : \t",y_pred)

print(" Accuracy is: \t",metrics.accuracy_score(y_test,y_pred))
