"""
add multiple data at same type

extend()

l1 = []
l1.extend([1,2,3,4,5,6])
print(l1)

l1 = ["C","C++","Java","Android"]

subject = input("Enter your subject : ")

if subject in l1:
    print("yes subject is available")
else:
    print("no, subject is not available")

l1 = [12, 23, 64, 23, 8, 2, 5, 3, 7]

print(max(l1))
print(min(l1))
print(sum(l1))

l1 = [12, 23, 64, 23, 8, 2, 5, 3, 7]

l1.sort()
print(l1)

l1.sort(reverse=True)
print(l1)

"""

l1 = [12,34,56,78,12,34,67,90]

data = []

for i in l1:
    if i not in data:
        data.append(i)
print(l1)
print(data)