#include<iostream>
using namespace std;

class Account{
	public:
		
		string name,bn;
		long long ano,mo;
		
		Account()
		{
			bn = "Bank of Baroda";
			name = "Urvashi Kanala";
			mo = 7698635084;
			ano = 91457826745;
		}
		
		void detail()
		{
			cout<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			cout<<"----------- Account Owner Information -----------"<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			
			cout<<"Bank Name    : "<<bn<<endl<<endl;
			cout<<"Name         : "<<name<<endl<<endl;
			cout<<"Mobile No    : "<<mo<<endl<<endl;
			cout<<"Account No   : "<<ano<<endl<<endl;
		}
};

class Saving{
	public:
		
		long long bb,dt,cbb,si,cbbi,wd;
		
		Saving()
		{
			bb = 100000;
			
			cout<<endl;
			cout<<"Bank Balance  : "<<bb<<endl<<endl;
		}
		
		void deposit()
		{
			cout<<"Cheque Book Not Available For Saving Account."<<endl<<endl<<endl;
			
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl<<endl;
			cout<<"-------------- Deposit ---------------"<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl<<endl<<endl;
			
			cout<<"How Much Amount Do You Want To Deposit : ";
			cin>>dt;
			
			cout<<endl;
			cbb = bb + dt;
			si = (cbb*5*2)/100;
			cout<<"Your 2 Year Interest Is : "<<si<<endl<<endl;
			
			cbbi = cbb + si;
			cout<<"Your Current Bank Balance With Interest Is : "<<cbbi<<endl<<endl;
		}
		
		void withdraw()
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			cout<<"------------- Withdraw -------------"<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			
			cout<<"How Much Do You Want To Withdraw : ";
			cin>>wd;
			cout<<endl;
			
			if(cbbi < wd)
			{
				cout<<"Your Account Balance Is Insufficient"<<endl;
			}
			else
			{
				cout<<"Your Amount Withdraw Is Successful."<<endl<<endl;
				cout<<"-----------------------------------"<<endl<<endl;
				cout<<"Dear Urvashi Kanala Your Current Bank Balance is : "<<(cbbi-wd)<<endl<<endl;
				cout<<"-----------------------------------"<<endl<<endl;
			}
		}
};

class Current{
	public: 
		
		long long mb,balance,deposit,curbal,withdraw,lcbbs,charge;
		
		Current()
		{
			mb = 10000;
			balance = 100000;
			
			cout<<endl;
			cout<<"Bank Balance   :"<<balance<<endl<<endl;
			cout<<"1) In Your Current Account Must Be Atleast "<<mb<<endl<<endl;
			cout<<"2) No Interest Is Paid On Current Account."<<endl<<endl;
			cout<<"3) Available If You Need A Cheque Book. "<<endl<<endl<<endl;
		}
		
		void depositc()
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			cout<<"---------------- Deposit -------------"<<endl<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			
			cout<<"How Much Amount Do You Want To Deposit : ";
			cin>>deposit;
			curbal = balance + deposit;
			cout<<endl;
			cout<<"Your Current Bank Balance is : "<<curbal<<endl<<endl;
		}
		
		void withdrawc()
		{
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			cout<<"------------------ Withdraw --------------"<<endl<<endl;
			cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
			
			cout<<"How Much Amount Do You Want To Withdraw : ";
			cin>>withdraw;
			cout<<endl;
			lcbbs = curbal - withdraw;
			
			if(curbal < withdraw)
			{
				cout<<"-------------------------------"<<endl<<endl;
				cout<<"Your Account Balace Is Insufficient"<<endl;
				cout<<"-------------------------------"<<endl;
			}
			
			else
			{
				cout<<"Your Amount Withdraw Is Successfull."<<endl<<endl;
				cout<<"Your Current Bank Balance is : "<<lcbbs<<endl<<endl;
				
				if(lcbbs<10000)
				{
					charge = lcbbs - 1000;
					cout<<endl;
					cout<<"Since Your Account Balance Is Less Than 10000\nYou Will Have To Pay A Penalty Of 1000."<<endl<<endl;
					cout<<"---------------------------------------------------"<<endl<<endl;
					cout<<"Dear Urvashi Kanala Your Current Bank Balance is : "<<charge<<endl;
					cout<<"---------------------------------------------------"<<endl<<endl;
				}
			}
		}
};

int main()
{
	int choice;
	
	Account a;
	a.detail();
	
	cout<<"Account Type = (1) Saving (2) Current"<<endl<<endl;
	cout<<"Please Enter Your Choice 1 & 2 :";
	cin>>choice;
	
	if(choice == 1)
	{
		Saving s;
		s.deposit();
		s.withdraw();
	}
	
	else if(choice == 2)
	{
		Current c;
		c.depositc();
		c.withdrawc();
	}
	
	else
	{
		cout<<"Please Enter A Valid Choice.";
	}
	
	return 0;
}