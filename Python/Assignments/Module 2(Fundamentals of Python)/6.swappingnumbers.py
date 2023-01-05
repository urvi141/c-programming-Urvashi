# using without any temp variable
"""
x = 5
y = 10

# Befdore swapping numbers

print("Before swapping : ")
print("Value of x : ", x, " and y : ", y)

x , y = y , x

#After swapping numbers

print("After swapping : ")
print("Value of x : ", x, " and y : ", y)
"""


# using with temporary variable

x = int(input("Enter the number : "))
y = int(input("Enter the number : "))

temp = x
x = y
y = temp

print("Value of x : ", x)
print("Value of y : ", y)