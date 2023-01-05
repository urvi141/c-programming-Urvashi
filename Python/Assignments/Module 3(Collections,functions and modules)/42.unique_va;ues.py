d = {'C': 2, 'Javascript': 1, 'Python': 8, 'C++': 1, 'Java': 4, 'MySQL': 2, 'Graphic Design': 4}
Unique_Values = list({val for val in d.values() })
  
print("Dictionary = ", end = " ")
print(d)
print("Unique Values = ", end = " ")
print(Unique_Values)