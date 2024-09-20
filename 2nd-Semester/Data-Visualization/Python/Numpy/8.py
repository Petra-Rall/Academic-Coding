from numpy import random

x = random.normal(size=(2,3))

#Generate a random normal distribution of size 2x3 with mean at 1 and standard deviation of 2:
y = random.normal(loc = 1, scale = 2, size = (2,3))

print(x)
print(y)