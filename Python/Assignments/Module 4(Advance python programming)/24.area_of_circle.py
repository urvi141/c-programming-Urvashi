from math import pi

class Circle:
    def area(self,r):
        self.radius = r
        print("Area = ",pi*r*r)

    def perimeter(self,r):
        self.radius = r
        print("Perimeter = ",(2*pi*r))

c = Circle()
c.area(8)
c.perimeter(5)