#include<stdio.h>

void main()
{
	int matr[3][3],i,j,min;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the number ");
			scanf("%d", &matr[i][j]);
		}
	}
	
	min=matr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matr[i][j]<min)
			min=matr[i][j];
		}
	}
	
	printf("\nMin no is %d", min);
}