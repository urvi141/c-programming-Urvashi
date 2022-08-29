#include<iostream>
using namespace std;

class Cricketer{
	public:
		string name,role,bs;
		int no,age,tm,tr,avg,bestp;
		
		Cricketer()
		{
			name = "Rishabh Pant";
			role = "WK Batsman";
			bs = "Left Handed Bat";
			no = 17;
			age = 24;
			tm = 200;
			tr = 6214;
			bestp = 159;
			avg = tr/(float)tm;
		}
};

class Batsman : public Cricketer{
	public:
		
		void Information()
		{
			cout<<endl;
			cout<<"------------------"<<endl<<endl;
			cout<<"  BATSMAN DETAILS  "<<endl<<endl;
			cout<<"--------------------"<<endl<<endl;
			
			cout<<"Batsman Name  :"<<name<<endl;
			cout<<"Role          :"<<role<<endl;
			cout<<"Batting Style :"<<bs<<endl;
			cout<<"Batsman no    :"<<no<<endl;
			cout<<"Age           :"<<age<<endl;
		}
		
		void display()
		{
			cout<<"------------------"<<endl<<endl;
			cout<<"  CRICKET CAREER  "<<endl<<endl;
			cout<<"------------------"<<endl<<endl;
			
			cout<<"Match Played    :"<<tm<<endl;
			cout<<"Runs            :"<<tr<<endl;
			cout<<"Highest         :"<<bestp<<endl;
			cout<<"Average         :"<<avg<<endl;
		}
		
};

int main()
{
	Batsman b;
	b.Information();
	b.display();
	
	return 0;
}