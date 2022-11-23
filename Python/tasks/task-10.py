n_count = 0
p_count = 0

for i in range(1,6):
    num = int(input("enter number : "))
    if num >=0:
        p_count += 1
    else:
        n_count += 1

print("positive count ",p_count)
print("negative count", n_count)