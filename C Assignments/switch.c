#include<stdio.h>

void main()
{
	int base, height,length,breadth;
	float area,radius;
	
	int choice;
	
	printf("\n-------Choice Calculator-------");
	printf("\nEnter 1. to find area of triangle, \nEnter 2. to find area of circle, \nEnter 3. to find area of rectangle");
	
	printf("\nEnter your Choice");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: 	printf("\nEnter the base of triangle");
					scanf("%d",&base);
					printf("\nEnter the height of triangle");
					scanf("%d",&height);		
					printf("\nArea of triangle is %.2f", area=1.0/2*base*height);
					break;
		case 2:		
					printf("\nEnter the radius of circle");
					scanf("%f",&radius);
					printf("\nArea of circle is %.2f", 3.14*radius*radius);
					break;
		case 3: 	printf("\nEnter the length  of rectangle");
					scanf("%d", &length);
					printf("\nEnter the breadth of rectangle");
					scanf("%d", &breadth);
					printf("\nArea of rectangle is %.2f", length*breadth);
		break;
		default: printf("Invalid Choice");
				break;
	}
	
}