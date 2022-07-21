#include<stdio.h>

void add(int a, int b)
{
	printf("\nAddition = %d", (a+b));
}

void sub(int a, int b)
{
	printf("\nSubtraction = %d", (a-b));
}

void multi(int a, int b)
{
	printf("\nMultiplication = %d", (a*b));
}

void div(int a, int b)
{
	printf("\nDivision = %.2f", (a/b));
}

void main()
{
	int choice, a= 30, b=20;
	printf("Enter your choice? :");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: printf("\nAddition = %d", (a+b));
		break;
		case 2: printf("\nsubtraction = %d", (a-b));
		break;
		case 3: printf("\nMultiplication = %d", (a*b));
		break;
		case 4: printf("\nDivivsion = %.2f", (a/b));
		break;
		default: printf("Invalid Choice");
		break;
		
	}
}