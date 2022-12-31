from datetime import datetime

menu = """
            Welcome to Python E - Note

            Press 1 for generate Note
            Press 2 for view Note
            Press 4 for exit 


      """


status = True
while status:
    print(menu)
    choice = int(input("Enter your choice : "))
    if choice == 1:
        name = input("Enter Python E - Generator Name : ")
        if name.isdigit():
             print("Error : Invalid input")
             name = input("Enter Python E - Generator Name : ")
        title = input("Enter Python E - Note Title : ")
        content = input("Enter Python E - Note Content : ")
        print("----------------------------------------")
        current_datetime = datetime.now()
        print( current_datetime)
        print("E - Note Titele : ", title)
        print("E - Note Description : ", content)
        print(f"                    {'Note Generator : ', name}              ")
    elif choice == 2:
        print("View Note")
    elif choice == 4:
        print("Exit")
        status = False 

str_current_datetime = str(current_datetime)
file_name = str_current_datetime+".txt"
current_datetime1 = str_current_datetime
file = open("C:\\Users\\Lenovo\\Desktop\\Python\\Assessment\\myfile1.txt","a")
file.write("\nCurrent date & time : " +current_datetime1)
file.write("\n Python E - Note Title : "+title)
file.write("\n Python E - Note Content : "+content)
file.write("\n Note Generator : "+name)
file.close()
