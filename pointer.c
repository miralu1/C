#include<stdio.h>
#Define MAX 100
void main(void)
{
	/* Create a program using pointers in a function */
	/* Program to convert distance from miles to km */
	/* And apply the distance to the total trip */
	
	/* How many legs does the trip has?*/
	/* Give option */
	/* Accept data for each leg of the trip in miles */
	/* Convert data into km */
	/* Add data */
	/* Show new data with total */

	int leg_opt;
	void  miles_to_km(float *);
	
	float leg1, leg2, leg3, leg4, leg5;
	
	printf("How many legs does the trip contains? ");
	scanf("%d", &leg_opt);

	switch (leg_opt)
	{
	case 1:
	printf("This trip has a single leg.");
	printf("Enter the distance in miles: ");
	scanf("%f", &leg1);
	miles_to_km(&leg1);
	printf("The total distance in Kilometers is: %f\n", leg1);
	break;
	case 2:
	printf("This trip has 2 legs.");
	printf("Enter the distance in miles for first leg: ");
	scanf("%f", &leg1);
	miles_to_km(&leg1);
	printf("Enter the distance in miles for second leg: ");
	scanf("%f", &leg2);
	miles_to_km(&leg2);
	printf("The total distance in Kilometers is: %f\n", leg1 + leg2);
	break;
	}

}

void miles_to_km(float *miles)
{
	*miles = *miles / 0.621;
}
