#include<stdio.h>

void main()
{
	int a=0, b=-20;
	
	if(a && b)
	{
		printf("\nLine is true :");
	}
	else
	{
		printf("\nLine is false :");
	}
	if(!(a || b))
	{
		printf("\nLine is true :");
	}
	else
	{
		printf("\nLine is false :");
	}
	if(!(a && b))
	{
		printf("\nLine is true :");
	}
	else
	{
		printf("\nLine is false :");
	}
	
}