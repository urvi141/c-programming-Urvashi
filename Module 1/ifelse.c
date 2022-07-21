#include<stdio.h>

void main()
{
	int age;
	printf("enter the age");
	scanf("%d", &age);
	
	if(age>=18)
	{
		printf("\n eligible to vote");
	}
	else
	{
		printf("\n not eligible, sorry");
	}
	
}