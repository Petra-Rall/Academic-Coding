f = open("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\Python\\Filehandling\\demofile.txt")
#print(f.read(5))
#print(f.readline())

for x in f:
    print(x)

f.close()

f = open("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\Python\\Filehandling\\demofile.txt", "a")
f.write("Now the file has more content!")
f.close()

f = open("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\Python\\Filehandling\\demofile.txt", "r")
print(f.read())
f.close()

f = open("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\Python\\Filehandling\\demofile.txt", "w")
f.write("Woops! I have deleted the content!")
f.close()

f = open("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\Python\\Filehandling\\demofile.txt", "r")
print(f.read())

f = open("D:\\Academic-Coding\\2nd-Semester\\Data-Visualization\\Python\\Filehandling\\demofile.txt", "x")
