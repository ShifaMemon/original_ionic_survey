import matplotlib.pyplot as plt
import numpy as np #for numerical perform
import seaborn as sbn # for statestical visualization

import pandas as pd
train = pd.read_csv("/home/mca/shifa/ML/titanic/train.csv")
print(train.head()) #first five records display
print(train) # all records display


print(train.describe()) #find the mean median sd nd all


print(train.isnull()) # find any value is null or not


print(sbn.heatmap(train.isnull() , yticklabels='false'))
plt.show()


sbn.set_style('whitegrid')
sbn.countplot(x='Survived' , data=train , hue='Sex')
plt.show()



sbn.countplot(x='Survived' , data=train , hue='Pclass')
plt.show()

print(train['Age'].hist(bins=40 , color='darkred')) #for histogram
plt.show()

sbn.countplot(x='SibSp' , data=train)
print(train['SibSp'].hist(bins=40 , color='darkred'))
plt.show()

plt.figure(figsize=(12,5))
sbn.boxplot(x='Pclass' , y='Age' , data=train)
plt.show()



def impute_age(cols):
    age = cols[0];
    pclass = cols[1];
    if pd.isnull(age):
        if pclass == 1:
            return 37;
        elif pclass == 2:
            return 29;
        else :
            return 24;
    else:
        return age;

train['Age'] = train[['Age','Pclass']].apply(impute_age,axis=1)
print(sbn.heatmap(train.isnull(),yticklabels='true'))
plt.show()

print(train.shape)

N = 500
x = np.random.rand(N)
y = np.random.rand(N)
colors = (0,0,0)
area = np.pi*3

# Plot
plt.scatter(x, y, s=area, c=colors, alpha=0.5)
plt.title('Scatter plot pythonspot.com')
plt.xlabel('x')
plt.ylabel('y')
plt.show()

x = train['Age']
y = train['Survived']
colors = ('red','blue','green')
plt.scatter(x,y,c=colors)
plt.xlabel('x = Age')
plt.ylabel('y = Survived')
plt.show()

