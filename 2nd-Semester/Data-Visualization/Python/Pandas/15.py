import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

df.dropna(inplace = True) #changes the original dataframe

print(df.to_string())