#include<stdio.h>

void main()
{
	int day;
	printf("\nenter the number of days :");
	scanf("%d", &day);
	printf("\n1. Monday, \n2. Tuesday, \n3. Wednesday, \n4. Thursday, \n5. Friday, \n6. Saturday, \n7. Sunday");
	
	switch(day)
	{
				case 1: printf("\nMonday");
				break;
				case 2: printf("\nTuesday");
				break;
				case 3: printf("\nWednesday");
				break;
				case 4: printf("\nThursday");
				break;
				case 5: printf("\nFriday");
				break;
				case 6: printf("\nSaturday");
				break;
				case 7: printf("\nSunday");
				break;
				default: printf("Invalid Choice");
				break;
	}
				
}