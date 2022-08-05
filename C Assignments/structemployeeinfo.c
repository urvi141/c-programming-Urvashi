#include<stdio.h>

struct Employee
{
	int eno;
	char name[10];
	char address[30];
	int age;
};

void main()
{
	int i;
	struct Employee e1[5];
	
	printf("\nEnter Employee Information :");
	for(i=0;i<5;i++)
	{
		printf("\nEnter number :");
		scanf("%d", &e1[i].eno);
		printf("Enter Name :");
		scanf("%s", &e1[i].name);
		printf("Enter Address :");
		scanf("%s", &e1[i].address);
		printf("Enter Age :");
		scanf("%d", &e1[i].age);
		
	}
	
	printf("\nDisplay Employee Information :");
	for(i=0;i<5;i++)
	{
		printf("\nNumber = %d",e1[i].eno);
		printf("\nName = %s", e1[i].name);
		printf("\nAddress = %s", e1[i].address);
		printf("\nAge = %d", e1[i].age);
	}
}