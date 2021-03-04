#include<stdio.h>
#define MAXCOUNT 4
void main(void)
{

	int count;
	double fahren;

	double tempvert(double);

	for (count = 1; count <= MAXCOUNT; count++)
	{
		printf("\nEnter a Fahrenheit temperature: ");
		scanf("%lf", &fahren);
		printf("The Celsius Equivalant is %5.2lf\n", tempvert(fahren));
	}

}

double tempvert(double in_temp)
{

	return ( (5.0/9.0) * (in_temp - 32.0) );

}

