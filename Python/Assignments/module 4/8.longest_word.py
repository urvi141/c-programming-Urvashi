f = open("C:\\Users\\Lenovo\\Desktop\\Python\\Assignment\\module 4\\8.longword.txt","r")

wordsList = f.read().split()
longestWordLength = len(max(wordsList, key=len))
result = [word for word in wordsList if len(word) == longestWordLength]
print("Longest word : ",result)