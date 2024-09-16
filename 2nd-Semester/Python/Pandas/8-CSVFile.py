'''A simple way to store big data sets is to use CSV files (comma separated files).
CSV files contains plain text and is a well know format that can be read by everyone including Pandas.'''

import pandas as pd
import matplotlib.pyplot as plt 

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\8-data.csv')

#If you have a large DataFrame with many rows, Pandas will only return the first 5 rows, and the last 5 rows:
#print(df)
#Tip: use to_string() to print the entire DataFrame.
print(df.to_string())

df.plot()

plt.show()