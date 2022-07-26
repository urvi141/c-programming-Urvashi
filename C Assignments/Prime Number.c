#include<stdio.h>

void main()
{
	
	int i,n,flag=0;
	printf("Enter No. :");
	scanf("%d", &n);
	
	for(i=1; i<=n;i++)
	{
		if(n % i ==0)
		{
			flag++;
		}
	}
	if(flag == 2)
	{
		printf("It is prime No");
	}
	else
	{
		printf("It is not a prime no.");
	}
}