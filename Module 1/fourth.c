#include <stdio.h>

void main()
{
	int a;
	printf("Please Enter the value\n");
	scanf("%d" , &a);
	if(a>0)
	{
		printf("%d is positive value" , a);
	}
	else if(a==0)
	{
		printf("%d is zero" , a);
	}
	else
	{
		printf("%d is negative value", a);
	}
}