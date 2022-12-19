#include<stdio.h>

void displayArray(int *p1, int *p2)
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d\t", *(p1 + i));
	}
	
	printf("\n");
	
		for(i=0;i<5;i++)
	{
		printf("%d\t", *(p2 + i));
	}
}

void main()
{
	int arr1[5] = {10, 20, 30, 40, 50};
	int arr2[5] = {60, 70, 80, 90, 95};
	
	displayArray(arr1, arr2);
}