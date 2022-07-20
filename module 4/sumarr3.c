#include<stdio.h>

void main()
{
	int i;
	float arr1[5], arr2[5];
	
	printf("\n\n Accept Array 1 Element : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 1 Element[%d]", i);
		scanf("%f", &arr1[i]);
	}
	
	printf("\n\n Accept Array 2 Element : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 2 Element[%d]", i);
		scanf("%f", &arr2[i]);
	}
	
	printf("\n\n division of Array 1 and Array 2  : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Division[%d] = %.2f\n", i, arr1[i] / arr2[i]);
	}
}