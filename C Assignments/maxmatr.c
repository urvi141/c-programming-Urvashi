#include<stdio.h>

void main()
{
	
	int matr[3][3], i,j,max;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter number :");
			scanf("%d", &matr[i][j]);
		}
	}
	
	max = matr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matr[i][j]>max)
			max = matr[i][j];
		}
	}
	printf("\n Max no is %d", max);
	
}