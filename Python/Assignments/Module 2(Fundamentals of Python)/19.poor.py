def not_poor(str1):
  snot = str1.find('not')
  spoor = str1.find('poor')
  if spoor > snot and snot>0 and spoor>0:
    print("Index of not",snot)
    print("Index of poor",spoor)
    str1 = str1.replace(str1[snot:(spoor+4)], 'good')
    return str1
  else:
    return str1
testString = input("Enter String : ")
print(not_poor(testString))
