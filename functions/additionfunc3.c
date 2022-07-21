#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int multi(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}


void main()
{
	int a,b;
	printf("Enter A :");
	scanf("%d", &a);
	printf("Enter B :");
	scanf("%d", &b);
	printf("\nAddition is %d", add(a,b));
	printf("\nSubtraction is %d", sub(a,b));
	printf("\nMultiplication is %d", multi(a,b));
	printf("\nDivision is %.2f", div(a,b));
}