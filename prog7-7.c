#include<stdio.h>
void main(void)
{
	/* Question 1 */
	/* void amount(float *num); */
	/* void price(double *num); */
	/* void minutes(int *num); */
	/* void key(char *let); */
	/* void yeild(double *num); */

	/* Question 3 */
	/* Write a function header for time */
	/* 3 int values seconds, minutes and hours */
	/* void time(int *sec, int *min, int *hrs) */
	/* time(&seconds, &minutes, &hours); */

	/* Question 5 */
	/* function change has 1 float and 4 int pointer arguments */
	/* quarters, dimes, nickels and pennies.*/
	/* Value of floating point is converted and returned in to the*/
	/* integer variables */

	__fpurge(stdin);
	float dollar;
	int quarters, dimes, nickels, pennies;
	void change(float, int *, int *, int *, int *);

	printf("Enter a dollar amount: ");
	scanf("%f", &dollar);

	change(dollar, &quarters, &dimes, &nickels, &pennies);

	printf("For dollar amount: %f\n", dollar);
	printf("Quarters: %d\n", quarters);
	printf("Dimes:    %d\n", dimes);
	printf("Nickels:  %d\n", nickels);
	printf("Pennies:  %d\n", pennies);

}

void change(float amount, int *q_change, int *d_change, int *n_change, int *p_change)
{
	
	float calc;
	*q_change = amount;
	*d_change = (float) ((amount- *q_change) * 10);
	*n_change = (float) ((amount- *q_change) * 5);
	*p_change = (float) ((amount- *q_change) * 1);
	return;
}

	
