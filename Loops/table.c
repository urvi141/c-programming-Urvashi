#include<stdio.h>

void main()
{
	
	int i,n,table;
	printf("Enter No.");
	scanf("%d", &n);
	
	for(i=1;i<=10;i++)
	{
		table = n * i;
		printf("%d\n", table);
	}
}