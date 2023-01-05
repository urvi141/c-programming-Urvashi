f1 = open("C:\\Users\\Lenovo\\Desktop\\Python\\Assignment\\module 4\\12.file1.txt","r")
f2 = open("C:\\Users\\Lenovo\\Desktop\\Python\\Assignment\\module 4\\12.file2.txt","w")

for line in f1:
    f2.write(line)