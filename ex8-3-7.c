#include<stdio.h>
void main(void)
{
	/* Question 7 */
	/* Program contains 3 single dimensional array price, quantity, amount. */
	/* Each array is capable of holding 10 double-precision numbers */

	double price[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
	double qty[10] = {4.0, 8.5, 6.0, 7.35, 9.0, 15.3, 3.0, 5.4, 2.9, 4.8};
	
	/* Pass arrays into function extend() which calculates the amount correspondingly */

	double amount[10];
	void extend(double [], double[], double []);
	
	extend(price, qty, amount);
	int i;

	printf("Price\tQuantity\tAmount\n");
	printf("-----\t--------\t------\n");

	for (i = 0;i < 10; ++i)
	printf("%4.2lf\t%4.2lf\t$%6.2lf\n", price[i], qty[i], amount[i]);
}

void extend(double price[], double quantity[], double amount[])
{
	int i;
	

	for (i = 0;i <10; ++i)
	{
	amount[i] = price[i] * quantity[i];
	}
}

