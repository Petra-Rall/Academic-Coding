import matplotlib.pyplot as plt
import numpy as np

y = np.array([35,25,25,15])

plt.pie(y)
plt.show()

#By default the plotting of the first wedge starts from the x-axis and moves counterclockwise
# The size of each wedge is determined by comparing the value 
# with all the other values, by using this formula:
# The value divided by the sum of all values: x/sum(x)