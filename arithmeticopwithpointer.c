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
	sub = *p1 - *p2;
	printf("\nSubtraction of %d and %d is %d", *p1, *p2, sub);
	multi = *p1 * *p2;
	printf("\nMultiplication of %d and %d is %d", *p1, *p2, multi);
	div = *p1/ *p2;
	printf("\nDivision of %f and %f is %.2f", *p1, *p2, div);
	
	
}