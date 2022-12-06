import random 
player1 = []
player2 = []

num = random.randint(1,100)

for i in range(1,13):
    if num < 50:
        player1.append(num)
    else:
        player2.append(num)

print(player1)
print(player2)