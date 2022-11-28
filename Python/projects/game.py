"""
Game:
   You have to pick the Red color ball from all the three color balls.They all were mixed in one box.
   Pick ball one by one and if anyone picked the Red color ball then he/she will win the game and other will loose.

"""


import random

l1 = ["RED", "GREEN", "BLUE"]
point1 = 0
point2 = 0
status = True
while status:
    friend2 = random.choice(l1)
    friend1 = input("Enter RED / GREEN / BLUE : ").upper()
    print("Friend-1 ", friend1)
    print("Friend-2 ", friend2)

    if friend1 == "RED" and friend2 == "RED":
        print("TIE")
        point1 += 1
        point2 += 1
    elif friend1 == "RED" and friend2 =="GREEN":
        print("FRIEND-1 PICKED RIGHT BALL")
        point1 += 1
    elif friend1 == "GREEN" and friend2 == "RED":
        print("FRIEND-2 PICKED RIGHT BALL")
        point2 += 1
    elif friend1 == "RED" and friend2 == "BLUE":
        print("FRIEND-1 PICKED RIGHT BALL")
        point1 += 1
    elif friend1 == "BLUE" and friend2 == "RED":
        print("FRIEND-2 PICKED RIGHT BALL")
        point2 += 1 
    else:
        print("NO ONE WINS THE GAME")

    print("Points of friend1 ", point1)
    print("Points of friend2 ", point2)

    choice = input("Do you want to play again ? : ")
    if choice == 'n' or choice =="no":
        status = False

print("FRIEND - 1 TOTAL POINT IS : ", point1 )
print("FRIEND - 2 TOTAL POINT IS : ", point2)


if point1>point2:
    print("\n FRIEND - 1 IS WINNER !!! \n")
elif point1<point2:
    print("\n FRIEND - 2 IS WINNER !!! \n")
else:
    print("\n BOTH FRIENDS ARE WINNER !!! \n")

