#include<stdio.h>
#define DAYS 10
#define FEDERAL 4.53625 
#define PROVINCIAL 2.1275
#define CPP 4.2425
#define EI 1.62

/* Write a program which calculates 2 weeks of salary based on hours worked */
/* Pay should also contain gross amount and net amount after federal and local taxes */
/* Pay should also reflect if amount is over a certain hour, to reflect overtime work */
/* It needs to match employer's payroll */


/* Ask user to enter daily hours worked */
/* Add total number of hours worked */
/* Ask user their hourly pay rate */
/* Calculate pay based by multiplying hours with pay rate */
/* If number of hours go beyond 44 hours, calculate overtime pay */
/* Deduct taxes */
/* Display Gross amount and net amount */

void main(void)
{

	int daily_hours[DAYS], i, total_hours;
	float pay_rate, gross_pay;
	
	void taxes(float);

	printf("*****************************************************************************\n");
	printf("\t\t\t\tPay Calculator\n");	
	printf("*****************************************************************************\n");
	printf("This program is designed to calculate your pay. It is there to support all\n");
	printf("employees against employer's mistakes in handling your pay.\n");
	printf("\nThe first section will ask you for your daily hours worked.\n");

	for (i = 0; i < DAYS; i++)
	{
		printf("Hours worked for Day %d: ",  i + 1);
		scanf("%d", &daily_hours[i]);
		total_hours += daily_hours[i];
	}


	printf("\nEnter your hourly pay rate: ");
	scanf("%f", &pay_rate);

	gross_pay = total_hours * pay_rate;

	printf("\n***** Gross pay = %5.2f *****\n", gross_pay);
	printf("total hours = %d\n", total_hours);

 	taxes(gross_pay);

}

void taxes(float gross_monthly)
{

	float fed, prov, cpp_tax, ei_tax, net_pay;
	fed = gross_monthly * (FEDERAL / 100.00);
	prov = gross_monthly * (PROVINCIAL / 100.00);
	cpp_tax = gross_monthly * (CPP / 100.00);
	ei_tax = gross_monthly * (EI / 100.00);
	printf("\nFederal tax = $ %5.2f\n", fed);
	printf("\nProvincial tax = $ %5.2f\n", prov);
	printf("\nCPP = $ %5.2f\n", cpp_tax);
	printf("\nEI - $ %5.2f\n", ei_tax);

	net_pay = gross_monthly - (fed + prov + cpp_tax + ei_tax);

	printf("***** Net Pay = $ %5.2f\n", net_pay);
	return;

}
