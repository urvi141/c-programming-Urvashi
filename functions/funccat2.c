#include<stdio.h>

void add(int a, int b)  // Cat 2- No return type with parameter  // Formal Parameters
{
	printf("\nAddition = %d", (a+b));
}

void sub(int a, int b)
{
	printf("\nSubtraction = %d", (a-b));
}

void main()
{
	int a = 10, b = 20;
	add(a,b);
	sub(a,b);
}