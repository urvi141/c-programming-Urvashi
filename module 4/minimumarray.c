#include<stdio.h>

void main()
{
	int a[10],i,min;
	
	for(i=0;i<10;i++)
	{
		printf("\nEnter number : ");
		scanf("%d", &a[i]);
	}
	
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	
	printf("\nMin no is %d", min);
}