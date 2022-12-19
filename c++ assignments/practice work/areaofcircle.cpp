#include<iostream>
using namespace std;

class Circle{
	float pi, radius;
	
	public:
		Circle(float p, float r)
		{
			pi = p;
			radius = r;
		}
		
		void area()
		{
			cout<<"Area = "<<(pi*radius*radius)<<endl;
		}
};

int main()
{
	Circle c(3.14, 5);
	c.area();
	return 0;
}

