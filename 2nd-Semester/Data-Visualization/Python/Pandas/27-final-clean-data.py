import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

x = df["Calories"].mode()[0]

df.drop_duplicates(inplace = True)
df['Date'] = pd.to_datetime(df['Date'], errors = 'coerce')
df.dropna(subset =['Date'], inplace= True)
df.fillna({"Calories":x}, inplace = True )

for x in df.index:
    if df.loc[x, "Duration"] >120:
        df.loc[x, "Duration"] = 120

print(df.to_string)