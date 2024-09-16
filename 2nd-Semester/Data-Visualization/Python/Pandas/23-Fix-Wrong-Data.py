import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

df.loc[7, 'Duration'] = 45

print(df.to_string)