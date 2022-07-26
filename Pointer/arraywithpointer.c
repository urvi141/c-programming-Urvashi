#include<stdio.h>

void main()
{
	int arr[5] = {10, 20, 54, 23, 24};
	int i;
	
	int *ptr;
	ptr = arr;
	
	printf("\nPrinting Address of an Array : \n");
	for(i=0;i<5;i++)
	{
		printf("\nElement [%d] = %u", i, ptr+i);
	}
	
	printf("\nPrinting Values of an Array : \n");
	for(i=0;i<5;i++)
	{
		printf("\nElement [%d] = %d", i, *(ptr+i));
	}
	
	
}