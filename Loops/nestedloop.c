#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=30;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}