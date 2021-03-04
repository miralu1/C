#include<stdio.h>
void main(void)
{
	/* Question 12 */
	/* function totamt accept 4 ints quarters, dimes, nickels, pennies */
	/* Function determines dollar value of number of quarters, nickels, etc*/
	/* Display the value passed to the function */
	
	int quarters, dimes, nickels, pennies;
	float totamt(int, int, int, int);

	printf("Enter no. of quarters: ");
	scanf("%d", &quarters);
	printf("Enter no. of dimes: ");
	scanf("%d", &dimes);
	printf("Enter no. of nickels: ");
	scanf("%d", &nickels);
	printf("Enter no. of pennies: ");
	scanf("%d", &pennies);

	printf("The dollar value of all change is: $%6.2f\n", totamt(quarters, dimes, nickels, pennies));

}

float totamt(int q, int d, int n, int p)
{

	float quarter = .25 * q, dime = .10 * d, nickel = .05 * n, penny = .01 * p;
	float total = quarter + dime + nickel + penny;

	return (total);
}	
