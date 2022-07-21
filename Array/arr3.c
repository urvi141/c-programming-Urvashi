#include<stdio.h>

void main()
{
	int i;
	int arr1[5], arr2[5], arr3[5];
	
	
	printf("\n\n Accept Array 1 Element : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 1 Element[%d]", i);
		scanf("%d", &arr1[i]);
	}
	
	printf("\n\n Accept Array 2 Element : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 2 Element[%d]", i);
		scanf("%d", &arr2[i]);
	}
	
	printf("\n\n Accept Array 3 Element : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 3 Element[%d]", i);
		scanf("%d", &arr3[i]);
	}
	
	printf("\n\nSum of Array 1 and Array 2 and Array 3 : \n\n");
	for(i=0;i<5;i++)
	{
		printf("sum[%d] = %d\n", i , arr1[i] + arr2[i] + arr3[i]);
	}
}