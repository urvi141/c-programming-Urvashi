#include<stdio.h>

void main()
{
	int n, rem, q, result = 0;
	
	printf("Enter the Number :");
	scanf("%d", &n);
	
	q = n;
	
	while(q!=0)
	{
		rem = q%10;
		result = result*10 + rem;
		q = q/10;
	}
	
	if(result == n)
	{
		printf("\nIt is Palindrome");
	}
	else
	{
		printf("\nIt is not Palindrome");
	}
	
	
}