#include<stdio.h>

void main()
{
	int a = 6, b= 5, c= 6, result;
	
	result = (a==c) && (a>b);
	printf("(a==c) && (a>b) is %d\n", result);
	result = (a==c) && (b<a);
	printf("(a==c) && (b>a) is %d\n", result);
	result = (a==c) || (a<b);
	printf("(a==c) || (a<b) is %d\n", result);
	result = (a==c) || (b<c);
	printf("(a==c) || (b<c) is %d\n", result);
	result = !(a==c);
	printf("!(a==c) is %d\n", result);
	
}