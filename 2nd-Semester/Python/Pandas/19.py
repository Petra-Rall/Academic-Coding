import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

x = df["Calories"].median()

df.fillna({"Calories":x}, inplace = True) 

print(df.to_string)