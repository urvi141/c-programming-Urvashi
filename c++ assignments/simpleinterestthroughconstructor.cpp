#include<iostream>
using namespace std;

class si{
	public:
		
		int principal;
		int year;
		float rate;
		
		si(int p, int y, float r)
		{
			principal = p;
			year = y;
			rate = r;
		}
		
		void SimpleInterest()
		{
			cout<<"SimpleInterest = "<<(principal*rate*year/100)<<endl;
		}
};

int main()
{
	si a(10000, 2000, 2.5);
	a.SimpleInterest();
	
	return 0;
}

