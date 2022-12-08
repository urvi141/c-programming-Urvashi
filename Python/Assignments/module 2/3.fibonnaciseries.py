nterms = int(input("How many terms? "))

# first two terms
a, b = 0, 1
count = 0
result = 0

# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
# if there is only one term, return n1
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(a)
# generate fibonacci sequence
else:
   print("Fibonacci sequence:")
   while count < nterms:
       print(a)
       result = a + b
       a = b
       b = result
       count += 1