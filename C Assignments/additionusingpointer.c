#include<stdio.h>

void main()
{
	int a,b,sum, sub, multi, div;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("\nEnter the values :");
	scanf("%d%d", p1,p2);
	sum = *p1 + *p2;
	printf("\nSum of %d and %d is %d", *p1, *p2, sum);
	
	
}