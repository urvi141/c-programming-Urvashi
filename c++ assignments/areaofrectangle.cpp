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
		
		void area()
		{
			cout<<"Area = "<<(length*width)<<endl;
		}
		
};

int main()
{
	Rectangle r(15,5);
	r.area();
	return 0;
	
}