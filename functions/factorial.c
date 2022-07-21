#include<stdio.h>

int factorial(int i)
{
	int fact = 1;
	for(i=4;i>0;i--)
	{
		fact = fact * i;
		
	}
	return fact;
}

void main()
{
	printf("%d", factorial(4));
}