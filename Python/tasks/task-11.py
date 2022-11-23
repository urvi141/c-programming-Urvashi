even = 0
odd = 0

for i in range(1, 6):
    num1 = int(input("enter number :"))
    if num1 % 2 == 0:
        even += 1
    else:
        odd += 1

print("even number ", even)
print("odd number", odd)
