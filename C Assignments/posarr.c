#include<stdio.h>

void main()
{
	int arr[5], i,pos;
	printf("\nEnter the number :");
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter the position");
	scanf("%d", &pos);
	
	i = 0;
   while (i < 5 && pos != arr[i]) {
      i++;
   }
 
   if (i < 5) 
   {
      printf("The element is found in the position = %d", i + 1);
      
   } else
    {
      printf("Element not found!");
   }
	
		
}