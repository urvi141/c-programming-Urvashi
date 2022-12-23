d1 = {"Name" : "Urvashi" , "Age" : "23"}
d2 = {"Blood Group" : "B-positive", "Gender" : "Female"}
d3 = {"City" : "Ahemdabad"}
d4 = {}
for d in (d1,d2,d3) : d4.update(d)
print(d4)