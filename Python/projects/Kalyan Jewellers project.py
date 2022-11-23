
Name = input("Enter your name : ")
Gender = input("Enter the gender : ")
Age = int(input("Enter your age : "))
Product = input("Enter product name : ")
Gram = int(input("Enter gram of product : "))
gold_price = int(input("Enter the gold price : "))
Total_rate = Gram * gold_price
making_charges = int(input("Enter making charges : "))
total_charges = Total_rate + making_charges
total_amt = Total_rate + total_charges

print("WELCOME TO KALYAN JEWELLERS")
print("Name: ", Name)
print("Gender: ", Gender)
print("Age: ", Age)
print("Product : ", Product)
print("Gram : ", Gram)
print("Gold Price : ", gold_price)
print("Total Rate : ", Total_rate)
print("Making Charges : ", making_charges)
print("Total Charges : ", total_charges)
print("Total Amt : ", total_amt)

Discount = " "

if Gender == "male":
    if Age > 65:
        if total_amt >= 200000 and total_amt < 300000:
            print("Discount 20%")
            Discount = int(total_amt)*0.2
        elif total_amt >= 300000 and total_amt < 500000:
            print("discount 30%")
            Discount = int(total_amt)*0.3
        elif total_amt > 500000:
            print("discount 35%")
            Discount = int(total_amt)*0.35
        else:
            print("No discount")
    else:
        if total_amt >= 200000 and total_amt < 300000:
            print("discount 10%")
            Discount = int(total_amt)*0.1
        elif total_amt >= 300000 and total_amt < 500000:
            print("discount 20%")
            Discount = int(total_amt)*0.2
        elif total_amt > 500000:
            print("discount 25%")
            Discount = int(total_amt)*0.25
        else:
            print("No discount")

if Gender == "female":
    if Age > 65:
        if total_amt >= 200000 and total_amt < 300000:
            print("Discount 25%")
            Discount = int(total_amt)*0.25
        elif total_amt >= 300000 and total_amt < 500000:
            print("discount 35%")
            Discount = int(total_amt)*0.35
        elif total_amt > 500000:
            print("discount 40%")
            Discount = int(total_amt)*0.4
        else:
            print("No discount")
    else:
        if total_amt >= 200000 and total_amt < 300000:
            print("discount 15%")
            Discount = int(total_amt)*0.15
        elif total_amt >= 300000 and total_amt < 500000:
            print("discount 25%")
            Discount = int(total_amt)*0.25
        elif total_amt > 500000:
            print("discount 30%")
            Discount = int(total_amt)*0.3
        else:
            print("No discount")

Dis_amt = (total_amt - making_charges) - Discount
print("Discount Amount :", Dis_amt)

net_amt = total_amt - Dis_amt
print("Net amount : ", net_amt)

print("Happiness is not in money, but in shopping.", end=" ")
print("Thank You ")
