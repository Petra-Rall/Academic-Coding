import matplotlib.pyplot as plt
import numpy as np

x = np.array(['A','B','C'])
y = np.array([100,200,50])

plt.barh(x,y, height = 0.5, color = "red")
plt.show()