import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

#Replace Only For Specified Columns
df["Calories"].fillna(130, inplace = True)

print(df.to_string())