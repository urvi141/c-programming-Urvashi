#find len of string

data = "Android"
print(len(data))

#find first character
print(data[0])

#find last character
print(data[-1])

#solution
l1 = ["android",'red','blue','aba','aea','1221']

count = 0

for word in l1:
    if len(word) >= 2 and word[0] == word[-1]:
        count+=1

print("ANS = ", count)