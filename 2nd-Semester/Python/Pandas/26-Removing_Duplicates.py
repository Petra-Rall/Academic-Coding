import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

df.drop_duplicates(inplace = True)

#print(df.duplicated())
print(df.to_string)