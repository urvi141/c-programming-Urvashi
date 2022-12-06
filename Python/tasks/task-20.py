
"""
l1 = []


for i in range (1,6):
    num = int(input("Enter the numbers : "))
    l1.append(num)

print(l1)
"""

l1 = []
l2 = []

for i in range (1,6):
    num = int(input("Enter the number : "))
    if num % 2 == 0:
        print("even number")
        l1.append(num)
    else:
        print("odd numbers")
        l2.append(num)

print(l1)
print(l2)

