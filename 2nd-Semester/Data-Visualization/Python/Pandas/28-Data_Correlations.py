import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\28-data.csv')

print(df.corr())

#Note: The corr() method ignores "not numeric" columns. 