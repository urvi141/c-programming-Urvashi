#include<stdio.h>

void displayArray(int *p1, int *p2)
{
	int i, sum;
	int arr3[5];
	
	for(i=0;i<5;i++)
	{
		printf("%d\t", *(p1 + i));
	}
	
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t", *(p2 + i));
	}
	
	for(i=0;i<5;i++)
	{
		arr3[i] = *(p1 + i) + *(p2 + i);
	}
	
	printf("\n\nSum of Array 1 and Array 2 :\n\n");
	for(i=0;i<5;i++)
	{
		printf("Sum[%d] = %d\n", i,*(arr3 + i));
	}
}

void main()
{
	int arr1[5] = {10, 20, 30, 40, 50};
	int arr2[5] = {60, 70, 80, 90, 95};
	
	displayArray(arr1,arr2);
}