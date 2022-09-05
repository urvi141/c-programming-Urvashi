#include<iostream>
using namespace std;

template <typename T>
T myMax(T x, T y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	cout<<myMax<int>(30,10)<<endl;
	cout<<myMax<float>(60.2,40.5)<<endl;
	
	return 0;
}                               