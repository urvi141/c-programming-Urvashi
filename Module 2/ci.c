#include<stdio.h>

void main()
{
	int principal, time, ci, amount;
	float rate;
	
	printf("\n------Formula------\n");
	printf("\nEnter the principal : ");
	scanf("%d", &principal);
	printf("\nEnter the time :");
	scanf("%d", &time);
	printf("\nEnter the rate :");
	scanf("%f", &rate);
	ci= principal*1+rate*time-principal;
	printf("\nprtp value is : %d", ci);
	ci=amount-principal;
	printf("\nci value is : %.2f", ci);
}