#include<iostream>
using namespace std;

class Triangle{
	double base, height;
	float x = 0.5;
	
	public:
		Triangle(double b, double h, float x)
		{
		    base = b;
		    height = h;
		    x = 0.5;
		}
		
		void area()
		{
			cout<<"Area = "<<(x*base*height)<<endl;
		}
};

int main()
{
	Triangle t(5,10,0.5);
	t.area();
	return 0;
}