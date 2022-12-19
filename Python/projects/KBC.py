print("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=")
print("\t\t\t\tWELCOME TO KBC COMPETITION")
print("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=")
username = input("User Name : ")

right_ans = 0
wrong_ans = 0

points = 0
playing = True
while playing == True:
    print("\nQuestion 1: Odometer is to mileage as compass is to")
    options = print("A. speed B.	hiking C.	needle D.	direction")
    Ans = input("Fill the Answer : ")
    if Ans == "D":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")
    
    print("\nQuestion 2: Marathon is to race as hibernation is to")
    options = print("A. winter B. bear C. dream D. sleep")
    Ans = input("Fill the Answer : ")
    if Ans == "D":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")
        
    print("\nQuestion 3: Window is to pane as book is to")
    options = print("A. novel B. glass C. cover D. page")
    Ans = input("Fill the Answer : ")
    if Ans == "D":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 4: Cup is to coffee as bowl is to")
    options = print("A. dish B. soup C. spoon D. food")
    Ans = input("Fill the Answer : ")
    if Ans == "B":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 5: Yard is to inch as quart is to")
    options = print("A.gallon B. ounce C. milk D. liquid")
    Ans = input("Fill the Answer : ")
    if Ans == "B":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 6: Elated is to despondent as enlightened is to")
    options = print("A. aware B. ignorant C. miserable D. tolerant")
    Ans = input("Fill the Answer : ")
    if Ans == "B":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 7: Optimist is to cheerful as pessimist is to")
    options = print("A. gloomy B. mean C. petty D. helpful")
    Ans = input("Fill the Answer : ")
    if Ans == "A":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 8: Reptile is to lizard as flower is to")
    options = print("A. petal B. stem C. daisy D. alligator")
    if Ans == "C":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 9: Play is to actor as concert is to")
    options = print("A. symphony B. musician C. piano D. percussion")
    if Ans == "B":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nQuestion 10: Sponge is to porous as rubber is to")
    options = print("A. massive B. solid C. elastic D. inflexible")
    if Ans == "C":
        points += 10
        print("Points : ", points)
        right_ans += 1
        print("Correct Answer")
    else:
        points -= 20
        print("Points : ", points)
        wrong_ans -= 1
        print("Wrong Answer")

    print("\nTotal points :",points)
    print("\nTotal right answers are : ",right_ans)
    print("Total wrong answers are : ",wrong_ans)

    choice = input("\nDo you want to play again ? : ")
    if choice == 'n' or choice == "no":

        playing = False

