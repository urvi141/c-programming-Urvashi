#include<stdio.h>

void main()
{
	int a= 7, b= 5, c=12;
	
	printf("%d==%d is %d\n", a,b, a==b);
	printf("%d==%d is %d\n", a,c, a==c);
	printf("%d>%d is %d\n", a,b, a>b);
	printf("%d>%d is %d\n", a,c, a>c);
	printf("%d<%d is %d\n", a,b, a<b);
	printf("%d<%d is %d\n", a,c, a<c);
	printf("%d!=%d is %d\n", a,b, a!=b);
	printf("%d!=%d is %d\n", a,c, a!=c);
	printf("%d>=%d is %d\n", a,b, a>=b);
	printf("%d>=%d is %d\n", a,c, a>=c);
	printf("%d<=%d is %d\n", a,b, a<=b);
	printf("%d<=%d is %d\n", a,c, a<=c);
	
}