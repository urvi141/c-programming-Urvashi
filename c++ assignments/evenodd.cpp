#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter a Number:";
	cin >> num;
	
	if(num % 2 == 0)
	{
		cout<<"\nIt is even number";
	}
	else
	{
		cout<<"\nIt is odd number";
	}
}