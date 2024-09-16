import matplotlib.pyplot as plt
import numpy as np

x = np.array(['A','B','C'])
y = np.array([100,200,50])

plt.bar(x,y, width = 0.5)
plt.show()