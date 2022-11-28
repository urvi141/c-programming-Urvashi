import random

l1 = ["ROCK", "PAPER", "SCISSOR"]

status = True
while status:
    computer = random.choice(l1)
    user = input("Enter ROCK / PAPER / SCISSOR : ").upper()
    print("User : ", user)
    print("Computer : ", computer)

    if user==computer:
        print("TIE")
    elif user=="ROCK" and computer=="PAPER":
        print("COMPUTER WON THE MATCH")
    elif user=="ROCK" and computer=="SCISSOR":
        print("USER WON THE MATCH")

    elif user=="PAPER" and computer=="ROCK":
        print("USER WON THE MATCH")
    elif user=="PAPER" and computer=="SCISSOR":
        print("COMPUTER WON THE MATCH")

    elif user=="SCISSOR" and computer=="ROCK":
        print("COMPUTER WON THE MATCH")
    elif user=="SCISSOR" and computer=="PAPER":
        print("USER WON THE MATCH")

    choice = input("Do you want to play again ? : ")
    if choice == 'n' or choice == "no":
        status = False
