f = open("C:\\Users\\Lenovo\\Desktop\\Python\\Assignment\\module 4\\6.readlines.txt","r")

lines = f.readlines()
print(lines)

lines = [x.strip() for x in lines]
print(lines)