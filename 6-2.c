#include<stdio.h>
void main(void)
{
	/* Excercise 1 - Modify Program 6.3 to include float values */

	float firstnum, secnum, max;
	
	float find_max(float, float);

	printf("\nEnter a number: ");
	scanf("%f", &firstnum);
	printf("Great! Enter a second number: ");
	scanf("%f", &secnum);
	
	max = find_max(firstnum, secnum);

	printf("\nThe maximum of the two numbers is %f\n", max);

	/* Excercise 3 */
	/* a. void check(int first, float sec, double third) */
	/* b. double find_abs(double a) */
	/* c. float mult(float a,float b) */
	/* d. int sqr_it(int a) */
	/* e. int powfun(int a) */
	/* f. void table(void) */

	/* Excercise 4 */
	printf("\n\n");

	double data;
	double find_abs(double);

	printf("Enter a value to determine absolute: ");
	scanf("%lf", &data);

	printf("The absolute value is: %lf\n", find_abs(data));

	printf("\n\n");
	
	double mult1, mult2;

	double mult(double, double);

	printf("Enter 2 numbers to be multiplied: ");
	scanf("%lf %lf", &mult1, &mult2);

	printf("The result is: %lf\n", mult(mult1, mult2));
}

float find_max(float x, float y)
{
	float maxnum;

	if (x >= y)
	maxnum = x;
	else
	maxnum = y;

	return (maxnum);
}

 	
double find_abs(double a)
{
	double abs_value;
	
	if (a >= 0)
	abs_value = a;
	else
	abs_value = a;

	return(abs_value);
}

double mult(double x, double y)
{
	double result = x * y;
	
	return (result);
}


