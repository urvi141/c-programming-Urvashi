num = int(input("Enter the number : "))

if num % 2 != 0:
    print("It is odd number")
else:
    raise Exception("Number is not odd")