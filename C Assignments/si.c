#include<stdio.h>

void main()
{
	int principal,time,si;
	float rate, per;
	
	printf("\n------Formulas------\n");
	printf("\nEnter the principal :");
	scanf("%d", &principal);
	printf("\nEnter the time :");
	scanf("%d", &time);
	printf("\nEnter the rate of interest :");
	scanf("%f", &rate );
	si= principal*rate*time/100;
	printf("\nptr value is :%d", si);
	per=(float)rate/100;
	printf("\nsi value is :%.2f", per);
}