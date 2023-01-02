l1 = [1,2,3,4,5]
l2 = [2,3]

n = 0
for i in range(len(l1)):
    if l1[i] == l2[0]:
        n = 1
        while (n<len(l2)) and (l1[i+n] == l2[n]):
            n+=1

        if n == len(l2):
            print("sublist of main list")
