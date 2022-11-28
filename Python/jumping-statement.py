"""
Jumoing statement : 

there are 3 types:
1) break
2) continue
3) pass

"""



for i in range(1,6):
    marks = int(input("Enter your marks : "))
    if marks<35:
        break
    else:
        print("PASS")
    
"""
for i in range(1,6):
    marks = int(input("Enter your marks : "))
    if marks<35:
        continue
    else:
        print("PASS")
        """