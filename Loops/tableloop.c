#include<stdio.h>

void main()
{
	int i,n, table;
	printf("\nEnter the no :");
	scanf("%d", &n);
	
	printf("\n table of %d", n);
	
	for(i=1; i<=n; i++)
	{
		table= n*i;
		printf("\n %d * %d = %d",n, i,(n*i));
	}
}