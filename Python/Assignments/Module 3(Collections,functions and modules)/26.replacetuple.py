l = [("red","green","yellow"),("orange","pink","violet"),("purple","dark green","black")]
print([t[:-1] + ("blue",) for t in l])