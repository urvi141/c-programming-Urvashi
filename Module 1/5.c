#include <stdio.h>

void main()
{
	int x , y;
	printf("Enter the value of x:");
	scanf("%d", &x);
	printf("Enter the value of y:");
	scanf("%d", &y);
	if(x>y)
	{
		printf("%d is greater value than y");
	}
	if(x<y)
	{
		printf("%d is less than y");
	}
	if(x==y)
	{
		printf("%d is equal to y");
	}
}