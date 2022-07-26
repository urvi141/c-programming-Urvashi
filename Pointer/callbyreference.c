#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int a = 10, b = 20;
	printf("\nBefore Swap A = %d, B = %d", a, b);
	swap(&a, &b);
	printf("\nAfter Swap A = %d, B = %d", a, b);
	
}