#include<stdio.h>

void main()
{
	int i,j,k;
	for(i=1;i<=10;i++)
	{
		
		for(j=10;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
