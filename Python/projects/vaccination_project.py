from datetime import datetime

current_datetime = datetime.now()
print("Current date & time:",current_datetime)

str_current_datetime = str(current_datetime)
file_name = str_current_datetime+".txt"
name = input("Enter your name : ")
age = str(input("Enter your age : "))
gender = input("Enter your gender : ")

doze = """
         1 for Covishield
         2 for Co-vaccine

      """
print(doze)
choice = int(input("Enter your doze : "))
if choice == 1:
    print("You choose Covishield")
elif choice == 2:
    print("You choose Co-vaccine")

file = open("C:\\Users\\Lenovo\\Desktop\\Python\\project\\myfile2.txt",'a')
file.write("\n"+name)
file.write("\n"+age)
file.write("\n"+gender)
file.write("\n"+doze)
print("File created :",file.name)
file.close()