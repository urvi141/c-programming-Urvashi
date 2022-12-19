#include<iostream>
using namespace std;

class Science{
	public:
		void info()
		{
			cout<<"Subject Science "<<endl;
		}
};

class Physics : public Science{
	public:
		void formulas()
		{
			cout<<"Provides Formulas "<<endl;
		}
};

class Chemistry : public Science{
	public:
		void reactions()
		{
			cout<<"Practical of Reactions "<<endl;
		}
};

class Biology : public Science{
	public:
		void Human()
		{
			cout<<"Provides Biology System of Human "<<endl;
		}
};

int main()
{
	Physics p;
	cout<<"Physic "<<endl;
	p.info();
	p.formulas();
	
	Chemistry c;
	cout<<"\nChemistry "<<endl;
	c.info();
	c.reactions();
	
	Biology b;
	cout<<"\nBiology "<<endl;
	b.info();
	b.Human();
	
	return 0;
}