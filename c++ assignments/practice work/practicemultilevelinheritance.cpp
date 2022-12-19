#include<iostream>
using namespace std;

class X{
	public:
		int x;
		
		void getDataX()
		{
			cout<<"Enter the value of X :";
			cin>>x;
		}
		
		void readDataX()
		{
			cout<<"X = "<<x;
		}
};

class Y : public X{
	public:
		int y;
		
		
		void getDataY()
		{
			cout<<"Enter the value of Y :";
			cin>>y;
		}
		
		void readDataY()
		{
			cout<<"\tY = "<<y;
		}
};

class Z : public Y{
	public:
		int z;
		
		void getDataZ()
		{
			cout<<"Enter the value of Z :";
			cin>>z;
		}
		
		void readDataZ()
		{
			cout<<"\tZ = "<<z;
		}
};

int main()
{
	Z a;
	a.getDataX();
	a.getDataY();
	a.getDataZ();
	
	a.readDataX();
	a.readDataY();
	a.readDataZ();
	
	return 0;
}