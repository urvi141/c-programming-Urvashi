#include<stdio.h>

void add()
{
	int a=10, b=20;
	printf("\nAddition = %d", (a+b));
}

void sub()
{
	int a=30, b=20;
	printf("\nSubtraction = %d", (a-b));
}

void multi()
{
	int a=10, b=20;
	printf("\nMultiplication = %d", (a*b));
}

void div()
{
	int a=40, b=20;
	printf("\nDivision = %.2f", (a/b));
}

void main()
{
	add();
	sub();
	multi();
	div();
}