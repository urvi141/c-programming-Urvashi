#include <stdio.h>

void main()
{
	int a=-1 , b=-5;
	
	if(a && b)
	{
		printf("Line 1 is true");
	}
	else
	{
		printf("Line 2 is false");
	}
	if((a || b))
	{
		printf("\nLine 3 is true");
	}
	else
	{
		printf("\nLine 4 is false");
	}
	if(!(a && b))
	{
		printf("\nLine 5 is true");
	}
	else
	{
		printf("\nLine 6 is false");
	}
}