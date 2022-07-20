#include<stdio.h>

void main()
{
	int m1[2][3], m2[2][3];
	int i,j;
	
	printf("\nAccept Matrix 1 Element : ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d]" , i,j);
			scanf("%d", &matr1[i][j]);
		}
	}
	
	printf("\n Display Matrix 1  \n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("%d\t = %d", matr1[i][j]);
	
		}
		printf("\n");
	}
	
	printf("\nAccept Matrix 2 Element : ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d]" , i,j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("\n Display Matrix 2  \n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("%d\t = %d", m2[i][j]);
	
		}
		printf("\n");
	}
}