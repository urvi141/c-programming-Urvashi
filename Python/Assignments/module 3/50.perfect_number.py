n = int(input("Entewr the number : "))
sum = 0
for i in range(1, n):
    if(n % i == 0):
        sum = sum + i
if (sum == 1):
    print("The number is perfect number")
else:
    print("The number iks not perfect number")
