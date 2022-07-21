#include<stdio.h>

void main()
{
	int n,m;
	printf("\nEnter the number :");
	scanf("%d", &n);
	printf("\nEnter the number :");
	scanf("%d", &m);
	
	if(n>1)
	{
		printf("\n%d is prime number", n);
	}
	else if(n%1)
	{
		printf("\n%d is prime number", n);
	}
	else if(n%m)
	{
		printf("\n%d is prime number", n);
	}
	else
	{
		printf("\n%d is not prime number", n);
	}
}