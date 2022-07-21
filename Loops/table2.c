#include<stdio.h>

void main()
{
	int i,j,t,table;
	
	for(i=2;i<=9;i++)
	{
		printf("\n=================================\n");
		printf("\n------Table of %d--------\n\n", i);
		printf("================================");
		for(j=1;j<=10;j++)
		{
			t = i*j;
			printf("\n%d * %d = %d",i,j,t,i*j);
			
		}
	}
}