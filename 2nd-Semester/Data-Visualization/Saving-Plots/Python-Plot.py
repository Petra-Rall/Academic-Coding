import matplotlib.pyplot as plt
import numpy as np

y = np.array([35, 25, 25, 15])
mylabels = ["Apples", "Bananas", "Cherries", "Dates"]

plt.pie(y,labels = mylabels)

plt.legend(title = "Four fruits:")

plt.savefig("Python-Plot.pdf", format = "pdf", bbox_inches = "tight")

plt.show()