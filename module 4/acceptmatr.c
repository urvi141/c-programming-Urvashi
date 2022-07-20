#include<stdio.h>

void main()
{
	int matr1[3][3],matr2[3][3];
	int i,j;
	
	printf("\n================== Start Matrix 1 ====================\n");
	printf("\nAccept Matrix 1 Element :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Elements[%d][%d]", i,j);
			scanf("%d", &matr1[i][j]);
		}
	}
	
	printf("\nDisplay Matrix 1 Element :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", matr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n===================== End Matrix 1 =====================\n");
	
	
	printf("\n================== Start Matrix 2 ====================\n");
	printf("\nAccept Matrix 2 Element :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Elements[%d][%d]", i,j);
			scanf("%d", &matr2[i][j]);
		}
	}
	
	printf("\nDisplay Matrix 2 Element :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", matr2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n===================== End Matrix 2 =====================\n");
	
	
}