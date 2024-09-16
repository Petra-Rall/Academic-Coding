#removing empty row for date
import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

df['Date'] = pd.to_datetime(df["Date"], errors = 'coerce')
df.dropna(subset=['Date'], inplace = True)

print(df.to_string)