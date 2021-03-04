#include<stdio.h>
void main(void)
{
	void sqr_it(float);
	float num1;
	
	printf("Enter a number: ");
	scanf("%f", &num1);
	sqr_it(num1);

	printf("\n\n");
	void table_sqr_cube(float, float);
	float number1, number2;
	printf("Enter two values: ");
	scanf("%f %f", &number1, &number2);

	table_sqr_cube(number1, number2);

	/* Question 10 */
	/* function name whole returns integer part passed to function */
	/* Include in a working program */

	float num11;
	int whole(float);

	printf("\n\nEnter any number: ");
	scanf("%f", &num11);
	
	printf("The whole number of entered no. is: %d\n", whole(num11));
	
	/* Question 11 */
	/* function name fracpart returns fractional part to function */
	/* Call the whole function */

	float num13;
	float fracpart(float);
	
	printf("\n\nEnter any number: ");
	scanf("%f", &num13);

	printf("The fractional part of %f is %f\n", num13, fracpart(num13));	
}
int whole(float f)
{
	return(f);
}
float fracpart(float g)
{
	float frac;
	frac = g - whole(g);

	return(frac);
}

void sqr_it(float x)
{
	float square = x * x;
	printf("%f squared is %f\n", x, square);
}

void table_sqr_cube(float y, float z)
{
	printf("Number\tSquare\tCube\n");
	printf("------\t------\t----\n");
	while (y <= z)
	{
		printf("%2.0f%6.2f%6.2f\n", y, y*y, y*y*y);
		y++;
	}
}

