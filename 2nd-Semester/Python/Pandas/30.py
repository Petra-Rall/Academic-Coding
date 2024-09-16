import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('D:\\Academic-Coding\\2nd-Semester\\Python\\Pandas\\28-data.csv')

df.plot(kind = 'scatter', x = 'Duration', y = 'Calories', c = 'Calories', cmap = 'viridis')

plt.show() 