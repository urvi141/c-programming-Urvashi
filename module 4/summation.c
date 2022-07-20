#include<stdio.h>

void main()
{
	int n,i,sum;
	
	printf("Enter the positive number :");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		sum=i + n;
		printf("sum = %d\n", sum);
	}
}