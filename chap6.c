#include<stdio.h>
void main(void)
{
	int firstnum,secnum,thirdnum, fourthnum;
	void find_max(int, int);

	printf("Enter a number: ");
	scanf("%d", &firstnum);
	printf("Enter a 2nd number: ");
	scanf("%d", &secnum);

	find_max(firstnum, secnum);
	
	printf("Enter a 3rd number: ");
	scanf("%d", &thirdnum);
	printf("Enter a 4th number: ");
	scanf("%d", &fourthnum);
	find_max(thirdnum, fourthnum);

	printf("\n\n");

	void check(int, float, double);
	int first;
	float second;
	double third;
	
	printf("Enter an int: ");
	scanf("%d", &first);
	printf("Enter a float: ");
	scanf("%f", &second);
	printf("Enter a double: ");
	scanf("%lf", &third);
	printf("test run for values:%d %f %lf\n", first, second, third);	
	check(first, second, third);

	printf("\n\n");
	
	void find_abs(double);
	double abs;
	printf("Enter a value for calculating absolute value: ");
	scanf("%lf", &abs);

	find_abs(abs);

	printf("\n\n");
	void mult(float, float);
	float no1, no2;

	printf("Enter 2 numbers: ");
	scanf("%f %f", &no1, &no2);

	mult(no1, no2);
}

void find_max(int x, int y)
{
	int maxnum;

	if (x >= y)
	maxnum = x;
	else
	maxnum = y;

	printf("\n The maximum of the two numbers is %d.\n", maxnum);
}

void check(int a, float b, double c)
{
	printf("Value of first: %d\n", a);
	printf("Value of second: %f\n", b);
	printf("Value of third: %1f\n", c);
}
	/* Excercise 6.1 */

	/* Question 2 */
	/* Write a function name 'check' */
	/* with 3 arguments */
	/* 1 argument int */
	/* 2nd argument float */
	/* 3rd argument double */
	/* display the values of data passed */

	/* Question 3 */

	/* Write a function find_abs which accepts a double precision */
	/* compute its absolute value and display absolute value */
	
void find_abs(double value)
{
	if (value > 0)
	printf("Absolute value is: %lf\n", value);
	else
	printf("Absolute value is: %lf\n", -value);	
}


void mult(float val1, float val2)
{
	float total = val1 * val2;
	printf("The result is: %f\n", total);
}
