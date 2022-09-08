#include<iostream>
using namespace std;

class FF{
	private:
		int a,b;
		friend void swap(FF);
		public:
			
		FF()
		{
		 	a = 10;
			b = 20; 	
	    }
};

void swap(FF f1)
{
	int c;
	cout<<"Before Swaping A = "<<f1.a<<"\tB = "<<f1.b;
	c = f1.a;
	f1.a = f1.b;
	f1.b = c;
	cout<<endl;
	cout<<"After Swaping A = "<<f1.a<<"\tB = "<<f1.b;
}

int main()
{
	FF f1;
	swap(f1);
	
	return 0;
}