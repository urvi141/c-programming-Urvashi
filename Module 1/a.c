#include <stdio.h>

void main()
{
	int rollno,s1,s2,s3,s4,s5,total;
	float per;
	char name[10];
	
	printf("Enter the roll no :");
	scanf("%d", &rollno);
	printf("Enter the name :");
	scanf("%s", &name);
	printf("Enter the Physics marks :");
	scanf("%d", &s1);
	printf("Enter the Chemistry marks :");
	scanf("%d", &s2);
	printf("Enter the Biology marks :");
	scanf("%d", &s3);
	printf("Enter the Maths marks :");
	scanf("%d", &s4);
	printf("Enter the Computer marks :");
	scanf("%d", &s5);
	total = s1+s2+s3+s4+s5;
	printf("\nEnter the PCBMC marks :%d", total);
	per = (float)total/5;
	printf("\nEnter the PCBMC per : %.2f", per);
	
	if(per > 85)
	{
		printf("Distinction");
	}
	else if(per > 75)
	{
		printf("\nGrade A");
	}
	else if(per > 65)
	{
		printf("\nGrade B");
	}
	else if(per > 55)
	{
		printf("\nGrade C");
	}
	else
	{
		printf("Fail");
	}
}