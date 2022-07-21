#include<stdio.h>

void main()
{
	int i,j,k,rows;
	printf("Enter the no of rows :");
	scanf("%d", &rows);
	
	for(i=rows;i>=1;i--)
	{
		for(k=0;k<rows-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		for(j=0;j<i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}