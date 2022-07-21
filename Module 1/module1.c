#include<stdio.h>

void main()
{
	int age;
	char dob[10];
	char name[10];
	char address[30];
	
	printf("\nEnter the age :");
	scanf("%d", &age);
	printf("\nEnter the Birth date :");
	scanf("%s", &dob);
	printf("\nEnter the name :");
	scanf("%s", &name);
	printf("\nEnter the Address :");
	scanf("%s", &address);
	
	printf("\nAge = %d", age);
	printf("\nD.O.B = %s", dob);
	printf("\nName = %s", name);
	printf("\nAddress = %s", address);
	
}