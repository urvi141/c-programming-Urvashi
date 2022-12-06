"""
string : It is a collection of characters.

name = "python"

"""
"""
name = input("Enter your name : ")
print("lower ", name.lower())

name = input("Enter your name : ")
print("upper ", name.upper())

name = input("Enter your name : ")
print(len(name))

name = input("Enter your name : ")
print(name.capitalize())

"""

#menu = """
 #                MENU
       
  #           1) press 1 for play
   #          2) press 2 for exit
       
    #   """
#print(menu)
"""
name = input("Enter your name : ")

if name.isalpha():
    print("valid name : ", name)
else:
    print("invalid input")
"""

contact = input("Enter your contact : ")

if contact.isdigit():
    print("valid number")
else:
    print("invalid number")