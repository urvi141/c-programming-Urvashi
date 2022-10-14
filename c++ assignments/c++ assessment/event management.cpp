#include<iostream>
using namespace std;

class Event{
	public:
		string name, fname, lname;
		int n, min;
		
		void get_name()
		{
			cout<<"*******************Event Management System***********************"<<endl<<endl;
			cout<<"Enter name of the event"<<endl;
			cin>>name;
			cout<<endl<<"Enter the customers first and last name"<<endl;
			cin>>fname>>lname;
			cout<<endl<<"Enter the number of guests"<<endl;
			cin>>n;
			cout<<endl<<"Enter the number of minutes"<<endl;
			cin>>min;
		}
		
		void showname()
		{
			cout<<"Event name is : "<<name<<endl;
			cout<<"First and last name : "<<fname<<" "<<lname<<endl;
			cout<<"Number of guests : "<<n<<endl;
			cout<<"Number of minutes : "<<min<<endl<<endl;
		}
		
		
};

class Estimation : public Event{
	public:
	     float ser;
	     int x = 20;
	     const double h = 18.50, m = 0.40, d = 20.70;
	     float cost1, cost2, totalcost,totalfood, avg, finalcost, damt;
	     
		void get_estimate()
		{
		 cout<<"****************Event estimate for : "<<fname<<" "<<lname<<"********************"<<endl<<endl;	
		 ser = n / x;	                               
		}
										             
     	void showestimate()  
		{
			cout<<"Number of Server : "<<ser<<endl;
		}
		
		void get_cost()
		{
		   	cost1 = (min/60)*h;
		   	cost2 = (min%60)*m;
		   	totalcost = cost1 + cost2;
		}
		
		void show_cost()
		{
			cout<<"The cost for Servers : "<<totalcost<<endl;
		}
		
		void get_food()
		{
			totalfood = n * d;
			avg = totalfood / n;
			finalcost = totalfood + (totalcost * ser);
		}
		
		void show_food()
		{
			cout<<"The cost for Food is : "<<totalfood<<endl;
			cout<<"Average cost per person : "<<avg<<endl;
			cout<<"Total cost is : "<<finalcost<<endl;
		}
		
		void get_deposit()
		{
			damt = finalcost * 0.25;
		}
		
		void show_deposit()
		{
			cout<<"Please deposit a 25% deposit to reserve the event"<<endl;
			cout<<"The deposit needed is : "<<damt<<endl;
		}
};

int main()
{
	Estimation e;
	e.get_name();
	e.showname();
	e.get_estimate();
	e.showestimate();
	e.get_cost();
	e.show_cost();
	e.get_food();
	e.show_food();
	e.get_deposit();
	e.show_deposit();
	return 0;
}