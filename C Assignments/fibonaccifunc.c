#include<stdio.h>

void fibo(int n)
{
	int a;
	int b;
	int i, c;
	
}

void main()
{
	int a = 0;
	int b = 1;
	int c;
	int n, i;
	
	
	printf("\nFibonacci Series\n");
	printf("Enter the number :");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n", a);
		c = a+b;
		a = b;
		b = c;
	
	}
}