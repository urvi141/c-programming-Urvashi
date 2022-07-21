#include <stdio.h>

void main()
{
	int a, b;
	printf("Enter Number 1: ");
	scanf("%d" ,&a);
	printf("Enter Number 2: ");
	scanf("%d" ,&b);
	printf(" A = %d , B = %d" ,a,b);
	printf("\nAddition = %d",(a+b));
	printf("\nSubtraction = %d",(a-b));
	printf("\nMultiplication = %d",(a*b));
	printf("\nDivision = %.3f",(a/(float)b));
}