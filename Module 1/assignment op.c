#include<stdio.h>

void main()
{
	int a=5, c;
	
	c=a;
	printf("\nc = %d", c);
	c+=a;
	printf("\nc = %d", c);
	c-=a;
	printf("\nc = %d", c);
	c*=a;
	printf("\nc = %d", c);
	c/=a;
	printf("\nc = %d", c);
	c%=a;
	printf("\nc = %d", c);
}