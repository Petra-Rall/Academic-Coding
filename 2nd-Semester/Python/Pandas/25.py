import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

#Removing Rows
for x in df.index:
    if df.loc[x, "Duration"] > 120:
        df.drop(x, inplace = True)

print(df.to_string)