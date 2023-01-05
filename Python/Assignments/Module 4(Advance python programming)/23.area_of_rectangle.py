class Rectangle:
    def __init__(self,l,w):
        self.length = l
        self.width = w

    def area(self):
        return self.length*self.width

r = Rectangle(10,12)
print(r.area())