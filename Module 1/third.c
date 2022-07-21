#include<stdio.h>

void main()
{
	int a, b;
	printf("Enter number 1 and number 2 :");
	scanf("%d%d" , &a , &b);
	printf(" A = %d , B = %d" , a,b);
	printf("\nAddition = %d" , (a+b));
	printf("\nSubtraction = %d" , (a-b));
	printf("\nMultiplication = %d" , (a*b));
	printf("\nDivisioion = %.2f" , (a/(float)b));
	
	
 } 