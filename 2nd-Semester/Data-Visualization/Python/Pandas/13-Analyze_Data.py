import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\8-data.csv')

#print(df.head()) #first five
print(df.head(10))
print(df.tail())
print(df.info())