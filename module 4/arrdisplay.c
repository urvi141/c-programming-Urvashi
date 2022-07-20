#include<stdio.h>

void main()
{
	int arr[5];
	
	printf("Enter Elements :");
	scanf("%d", &arr[0]);
	scanf("%d", &arr[1]);
	scanf("%d", &arr[2]);
	scanf("%d", &arr[3]);
	scanf("%d", &arr[4]);
	
	
	printf("%d\t", arr+0);
	printf("%d\t", arr+1);
	printf("%d\t", arr+2);
	printf("%d\t", arr+3);
	printf("%d\t", arr+4);
}