from numpy import random
import matplotlib.pyplot as plt
import seaborn as sns

sns.distplot(random.normal(size=1000), hist = False)

plt.savefig("plot.pdf", format = "pdf")

plt.show()

