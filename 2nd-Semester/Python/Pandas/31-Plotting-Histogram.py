import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\28-data.csv')

df["Duration"].plot(kind = 'hist')

plt.show() 

'''A histogram needs only one column.

A histogram shows us the frequency of each interval, e.g. how many workouts lasted between 50 and 60 minutes?'''