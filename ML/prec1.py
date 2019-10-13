import pandas as pd

data = pd.read_csv("/home/mca/shifa/ML/Buy_Computer.csv", sep=',', header=None)
print("DataSet for Tree:", len(data), data.shape)
print(data)
