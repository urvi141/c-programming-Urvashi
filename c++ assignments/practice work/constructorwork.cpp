#include<iostream>
using namespace std;

class Box{
	public:
		
		double width, height, depth;
		
		Box()
		{
			cout<<"Default Constructor Called"<<endl;
			width = 10;
			height = 5;
			depth = 7;
		}
		
		Box(double w, double h, double d)
		{
			cout<<"Parameterized Constructor Called"<<endl;
			width = w;
			height = h;
			depth = d;
		}
		
		Box(const Box &obj)
		{
			cout<<"Copy Constructor Called"<<endl;
			width = obj.width;
			height = obj.height;
			depth = obj.depth;
		}
		
		void volume()
		{
			cout<<"Volume ="<<(width*height*depth)<<endl;
		}
};

int main()
{
	Box b1;
	b1.volume();
	Box b2(15,10,5);
	b2.volume();
	Box b3(b1);
	b3.volume();
	return 0;
}