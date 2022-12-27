def isPalindrome(s):
    return s == s[::-1]

s = "MALAYALAM"
ans = isPalindrome(s)

if ans:
    print("Yes")
else:
    print("No")
