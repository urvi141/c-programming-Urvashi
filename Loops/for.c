#include<stdio.h>

void main()
{
	int i;
	
	for(i = 0;i<=1000; i++)
	{
		if(i>=7)
		{
			break;
		}
		printf("%d\n", i);
	}
}