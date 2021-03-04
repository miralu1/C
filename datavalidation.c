#include<stdio.h>
#include<math.h>
void main(void)
{
	double usenum;
	
	printf("This program calculates the square root and\n");
	printf("reciprocal (1/number) of a number.\n");
	printf("\nEnter a number: ");
	
	scanf("%1f", &usenum);
	
	if (usenum < 0.0)
	printf("The square root of a negative number does not exist.\n");
	else
	printf("The square root of %1f is %1f\n", usenum, sqrt(usenum));
	
	if (usenum == 0.0)
	printf("The reciprocal of zero does not exist.\n");
	else
	printf("The reciprocal of %1f is %1f\n", usenum, 1/(usenum));
}
	
	
