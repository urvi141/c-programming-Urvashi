#include <stdio.h>

void main()
{
	int a , b;
	printf("Enter number 1 :");
	scanf("%d", &a);
	printf("Enter number 2 :");
	scanf("%d", &b);
	printf("A = %d, B = %d", a,b);
	printf("\nAddition = %d", (a+b));
	printf("\nSutraction = %d", (a-b));
	printf("\nMultiplication = %d", (a*b));
	printf("\nDivision = %.3f", (a/(float)b));
}