"""
list slicing

l1 = [12,34,67,8,78,90,23,34]

print(l1[:3]) # first 3 values

print(l1[2:5])

print(l1[-1]) # last values

print(l1[-4:-1])

print(l1[-4:])

"""
"""
l1 = [12,34,56,78,90,43]

l1.insert(0,100)
print(l1)

# pop = it will remove last element from the list.

l1.pop()
print(l1)

# remove element from specific index position

l1.pop(0)
print(l1)

# value wise remove
l1.remove(34)
print(l1)

print(l1.index(56))

l1 = [12,34,56,78,90,43]
l1.clear()
print(l1)
"""
l1 = [12,34,56,78,90,43]

del l1
print(l1)