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

class C : public B{
	public:
		int c;
		
		void getC()
		{
			cout<<"Enter C "<<endl;
			cin>>c;
		}
		
		void showC()
		{
			cout<<"\tC = "<<c;
		}
};

int main()
{
	C u;
	u.getA();
	u.getB();
	u.getC();
	
	u.showA();
	u.showB();
	u.showC();
	
	return 0;
}