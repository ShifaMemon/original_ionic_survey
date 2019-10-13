import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn import linear_model

data = pd.read_csv("/home/mca/shifa/ML/prectical_10/prec10.csv")
print("dataset :",len(data),data.shape)
print(data)
print(data.info())

plt.scatter(data.Square_Feet,data.Number_of_Bed_Rooms,data.Price_of_House)
plt.show()

x = data.iloc[:,:-1]
print(x)

y = data.iloc[:,-1]
print(y)

x_train,x_test,y_train,y_test = train_test_split(x,y,test_size=0.3,random_state=0)

reg = linear_model.LinearRegression()
reg.fit(x_train,y_train)

y_pred = reg.predict([[1236,3]])
print(y_pred)
