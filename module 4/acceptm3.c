#include<stdio.h>

void main()
{
	int m1[2][3], m2[2][3];
	int i,j;
	
	printf("\n  m1 Elements :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elements[%d][%d]", i,j);
			scanf("%d", &m1[i][j]);
		}
	}
	
	
	
	printf("\n  m2 Elements :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elements[%d][%d]", i,j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("\n\n Addition of m1 and m2  \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",  m1[i][j] + m2[i][j]);
		}
		printf("\n");
	}
}