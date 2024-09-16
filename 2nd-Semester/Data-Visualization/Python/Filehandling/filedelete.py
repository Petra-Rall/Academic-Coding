import os
if os.path.exists("D:\\Academic-Coding\\2nd-Semester\\Python\\Filehandling\\demofile3.txt"):
    os.remove("D:\\Academic-Coding\\2nd-Semester\\Python\\Filehandling\\demofile3.txt")
else:
    print("The file does not exist")

#to delete an entire folder: os.rmdir("myfolder")