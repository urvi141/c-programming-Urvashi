count = 0
f = open("C:\\Users\\Lenovo\\Desktop\\Python\\Assignment\\module 4\\10.countwords.txt","r")

for line in f:
    word = line.split(" ")
    count += len(word)

print("Total number of words : ",count)


