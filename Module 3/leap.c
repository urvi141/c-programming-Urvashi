#include<stdio.h>

void main()
{
	int year,days;
	printf("\nEnter the year :");
	scanf("%d", &year);
	printf("\nEnter the days :");
	scanf("%d", &days);
	
	if(year==366)
	{
		printf("\n%d is leap year", year);
	}
	else
	{
		printf("\n%d is not leap year", year);
	}
}