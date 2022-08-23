#include<iostream>
using namespace std;

class Animal{
	public:
		void info()
		{
			cout<<"I am an Animal. "<<endl;
		}
};

class Dog : public Animal{
	public:
		void Bark()
		{
			cout<<"I am a Dog, Woow. "<<endl;
		}
};

class Cat : public Animal{
	public:
		void Meow()
		{
			cout<<"I am a Cat, Meow. "<<endl;
		}
};

int main()
{
	Dog d;
	cout<<"Dog class "<<endl;
	d.info();
	d.Bark();
	
	Cat c;
	cout<<"\nCat class "<<endl;
	c.info();
	c.Meow();
	
	return 0;
}