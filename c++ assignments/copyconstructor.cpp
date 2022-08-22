#include<iostream>
using namespace std;

class Rectangle{
	double length, width;
	
	public:
		Rectangle(double l, double w)
		{
			length = l;
			width = w;
		}
		
		Rectangle(const Rectangle &obj)
		{
			length = obj.length;
			width = obj.width;
		}
		
		void area()
		{
			cout<<"Area = "<<(length*width)<<endl;
		}
		
};

int main()
{
	Rectangle r1(15,5);
	r1.area();
	Rectangle r2(r1);
	r2.area();
	
	return 0;
	
}