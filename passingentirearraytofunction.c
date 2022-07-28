#include<stdio.h>

void displayArray(int *p)
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d\t", *(p +i));
	}
}

void main()
{
	int arr[5] = {10, 20, 36, 45, 47};
	
	displayArray(arr);
}