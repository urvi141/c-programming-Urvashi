#include<iostream>
using namespace std;

class bank{
	int acno;
	string nm;
	string acctype;
	float bal;
	public:
		 bank(int acc_no, string name, string acc_type, float balance)
		{
			acno = acc_no;
			nm = name;
			acctype = acc_type;
			bal = balance;
		}
		
		void deposit();
		void withdraw();
		void display();
};

void bank::deposit()
{
	int damt;
	cout<<"\n  Deposit Amount = ";
	cin>>damt;
	bal+=damt;
}

void bank::withdraw()
{
	int wamt;
	cout<<"\n Withdraw Amount = ";
	cin>>wamt;
	if(wamt>bal)
	{
		cout<<"\n Cannot Withdraw Amount";
	}
	bal-=wamt;
}

void bank::display()
{
	int damt,wamt;
	cout<<"\n Account No : "<<acno;
	cout<<"\n Name : "<<nm;
	cout<<"\n Account Type : "<<acctype;
	cout<<"\n Balance : "<<bal;
}

int main()
{
	int acc_no;
	string name;
	string acc_type;
	float balance;
	
	cout<<"\n Account No ";
	cin>>acc_no;
	cout<<"\n Name ";
	cin>>name;
	cout<<"\n Account Type ";
	cin>>acc_type;
	
	bank b1(acc_no,name,acc_type,balance);
	b1.deposit();
	b1.withdraw();
	b1.display();
	
	return 0;
	
}