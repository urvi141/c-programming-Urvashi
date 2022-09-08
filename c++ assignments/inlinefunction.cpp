#include<iostream>
using namespace std;

class IL{
	public:
		int a,b,mul,cubea,cubeb;
		
		inline void multiplication()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
			mul = a*b;
			cout<<endl;
			cout<<"Multiplication Is : "<<mul;
		}
		
		inline void cube()
		{
			cout<<endl<<endl;
			cubea = a*a;
			cout<<"Cube A : "<<cubea<<endl;
			cubeb = b*b;
			cout<<"Cube B : "<<cubeb;
			
		}
		
};

int main()
{
	IL i;
	i.multiplication();
	i.cube();
	
	return 0;
}