def reverse_string(str1):
    if len(str1) % 4 == 0:
       return ''.join(reversed(str1))
    return str1
string = input("Enter your string : ")
print(reverse_string(string))