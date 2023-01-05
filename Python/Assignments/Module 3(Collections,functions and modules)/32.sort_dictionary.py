import operator

d = {1:4,2:6,3:0,4:1,5:2,6:3}

print(d)

sort_d = sorted(d.items(),key=operator.itemgetter(1))
print(sort_d)
sort_d = sorted(d.items(),key=operator.itemgetter(1), reverse=True)
print(sort_d)