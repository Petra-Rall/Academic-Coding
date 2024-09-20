import pandas as pd

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\14-data.csv')

new_df = df.dropna() #doesn't change the original dataframe

print(new_df.to_string())