'''Big data sets are often stored, or extracted as JSON.
JSON is plain text, but has the format of an object, and is well known in the world of programming, including Pandas.'''
import pandas as pd

df = pd.read_json('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\11-data.json')

print(df.to_string())