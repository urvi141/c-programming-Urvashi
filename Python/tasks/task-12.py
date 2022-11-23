pass_count = 0
fail_count = 0

for i in range(1,6):
    marks = int(input("enter marks : "))
    if marks < 35:
        pass_count += 1
    else:
        fail_count += 1

print("passing marks", pass_count)
print("failing marks", fail_count)