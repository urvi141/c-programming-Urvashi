#include <stdio.h>

void main()
{
	int rollno,s1,s2,s3,s4,total;
	float per;
	char name[10];
	
	printf("Enter the roll no : ");
	scanf("%d", &rollno);
	printf("Enter the name : ");
	scanf("%s", &name);
	printf("Enter the Accounts marks : ");
	scanf("%d", &s1);
	printf("Enter the Economics marks : ");
	scanf("%d", &s2);
	printf("Enter the Maths marks : ");
	scanf("%d", &s3);
	printf("Enter the Business marks : ");
	scanf("%d", &s4);
	total = s1+s2+s3+s4;
	printf("\nEnter AEMB Marks : %d", total);
	per = (float)total/3;
	printf("\n AEMB Percentage is : %.3f", per);
	
	if(per > 75)
	{
		printf("\nDistinction");
	}
	else if(per > 60)
	{
		printf("\nGrade A");
	}
	else if(per > 50)
	{
		printf("\nGrade B");
	}
	else if(per > 40)
	{
		printf("\nGrade C");
	}
	else
	{
		printf("Fail");
	}
	
}