#include <stdio.h>

void main()
{
	int a,b,c;
	printf("Enter three numbers : A, B, C");
	scanf("%d%d%d" , &a, &b, &c);
	
	if(a>b && a<c)
	{
		printf("%d is greater than b\n", a);
	}
	if(b<a && b>c)
	{
		printf("%d is greater than c\n", b);
	}
	if(c>a && c>b)
	{
		printf("%d is greater  \n", c);
	}
	if(a==b && b==c)
	{
		printf("All are equal\n");
	}
	
}