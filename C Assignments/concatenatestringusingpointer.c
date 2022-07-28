#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10] = "viram";
	char str2[10] = " solanki";
	char *p1, *p2;
	
	p1 = str1;
	p2 = str2;
	
	
	printf("\nString Concatenate :%s", strcat(str1, str2));
}