import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

x = df["Calories"].mode()[0]

df.fillna({"Calories":x}, inplace = True) 

print(df.to_string)

#Mode = the value that appears most frequently.