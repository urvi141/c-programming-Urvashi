#include<iostream>
using namespace std;

class Person{
	public:
		
	   int age;
	   string name;
	   
	   Person()
	   {
	   	  age = 23;
	   }
	   
	   void getName()
	   {
	   	    cout<<"Enter Name :"<<name;
	   	    cin>>name;
	   }
			   	   
};

class Student {
	public:
		
	   float percentage;
	   
	    Student()
	   {
	   	   percentage = 54;
	   }
	
};

class Teacher : public Person, public Student{
	public:
		
		float salary;
		
		Teacher()
		{
			salary = 10000;
		}
		
		void display()
		{
			cout<<"Age :"<<age<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Percentage :"<<percentage<<endl;
			cout<<"Salary :"<<salary<<endl;
		}
	
};

int main()
{
	Teacher t;
	t.getName();
	t.display();
	
	return 0;
}
