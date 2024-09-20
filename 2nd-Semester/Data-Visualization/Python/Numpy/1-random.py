from numpy import random

x = random.randint(100)
y= random.rand()
arr = random.randint(100, size=(5))
arr2D = random.randint(100, size=(3,5))
arrflt = random.rand(5)
arrflt2D = random.rand(3,5)

p = random.choice([3,5,7,9])
q = random.choice([3,5,7,9], size=(3,5))

print(x,y)
print(arr)
print(arr2D)
print(arrflt)
print(arrflt2D)
print(p)
print(q)