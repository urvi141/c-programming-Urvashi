def add_string(str1):
  length = len(str1)
  if length > 2:
    if str1[-3:] == 'ing':
      str1 += 'ly'
    else:
      str1 += 'ing'
  return str1
stringTest = input("Enter your string : ")
print(add_string(stringTest))
# print(add_string('abc'))
# print(add_string('string'))