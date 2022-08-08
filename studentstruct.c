#include<stdio.h>

struct Student {
	int age;
	char name[10];
	char address[30];
	char dob[10];
	int rollno;
};

void main() 
{
	int i;
	struct Student s1[3];

	printf("\nEnter Students Information\n");
	for(i=0; i<3; i++) {
		printf("\nEnter the age :");
		scanf("%d", &s1[i].age);
		printf("Enter the name :");
		scanf("%s", &s1[i].name);
		printf("Enter the address :");
		scanf("%s", &s1[i].address);
		printf("Enter the D.O.B :");
		scanf("%s", &s1[i].dob);
		printf("Enter the rollno :");
		scanf("%d", &s1[i].rollno);
	}

	printf("\nStudents Information");
	for(i=0; i<3; i++) 
	{
		printf("\nAge = %d", s1[i].age);
		printf("\nName = %s", s1[i].name);
		printf("\nAddress = %s", s1[i].address);
		printf("\nD.O.B = %s", s1[i].dob);
		printf("\nRollno = %d", s1[i].rollno);
	}
}
