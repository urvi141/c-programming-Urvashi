#include <stdio.h>

void main()
{
	int a, b;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	printf("enter the value of b\n");
	scanf("%d", &b);
	
	if(a>b)
	{
		printf("%d is greater", a);
	}
	else
	{
		printf("%d is less", a);
	}
}
	