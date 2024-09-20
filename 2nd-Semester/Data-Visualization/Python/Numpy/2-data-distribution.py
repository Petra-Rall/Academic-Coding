from numpy import random

x = random.choice([3,5,7,9], p=[0.1,0.3,0.6,0.0], size=(100))
y = random.choice([3, 5, 7, 9], p=[0.1, 0.3, 0.6, 0.0], size=(3, 5))

print(x) 
print(y)

#p = probability
#The sum of all probability numbers should be 1.