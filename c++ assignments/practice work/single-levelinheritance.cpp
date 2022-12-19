#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
		void getA()
		{
			cout<<"Enter A "<<endl;
			cin>>a;
		}
		
		void showA()
		{
			cout<<"A = "<<a;
		}
};

class B : public A{
	public:
		int b;
		
		void getB()
		{
			cout<<"Enter B "<<endl;
			cin>>b;
		}
		
		void showB()
		{
			cout<<"\tB = "<<b;
		}
};

int main()
{
	B c;
	c.getA();
	c.getB();
	c.showA();
	c.showB();
	
	return 0;
}