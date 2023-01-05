def insert_sting_middle(str, word):
	return str[:2] + word + str[2:]

string = input("Enter your string : ")
print(insert_sting_middle('[[]]', string))

