#include <stdio.h>

union Employee{
	int eid;
	char name[10];
	float esal;

};


void main()
{
	int i;
	union Employee e1[3];
	
	printf("Employee Information");
	for(i=0;i<3;i++)
	{
	printf("\nEnter Id:");
	scanf("%d",&e1[i].eid);
	printf("Id = %d",e1[i].eid);
	printf("\nEnter Name:");
	scanf("%s",&e1[i].name);
	printf("Name = %s",e1[i].name);
	printf("\nEnter Salary :");
	scanf("%f",&e1[i].esal);
	printf("Salary = %.2f",e1[i].esal);	
}
	

	printf("\n Union Size is : %d",sizeof(e1));

	
	
	
}