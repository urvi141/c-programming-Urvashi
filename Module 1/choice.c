#include<stdio.h>

void main()
{
	int n1,n2;
	int choice;
	
	printf("\nEnter the number : A, B");
	scanf("%d%d", &n1,&n2);
	printf("\nA = %d , B = %d", n1, n2);
	printf("\n--------Choice Calculator--------\n");
	printf("\nPress 1.Addition, \nPress 2.Subtraction, \nPress 3.Multiplication, \nPress 4.Division");
	
	
	printf("\nEnter your Choice?");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: printf("\nAddition is %d", (n1+n2));
		break;
		case 2: printf("\nSubtraction is %d", (n1-n2));
		break;
		case 3: printf("\nMultiplication is %d", (n1*n2));
		break;
		case 4: printf("\nDivision is %.2f", (n1/(float)n2));
		break;
		default:  printf("\nInvalid Choice");
		break;
	}
	
		
}