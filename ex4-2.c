#include<stdio.h>
#define LIMIT 20000
#define REGRATE 0.02
#define HIGHRATE 0.025
#define FIXED 400
void main(void)
{
	/* int angle;
	printf("Enter the angle's degree: ");
	scanf("%d", &angle);

	if (angle == 90)
	printf("The angle is a right angle.\n");
	else 
	printf("Angle is not a right angle.\n");
	*/

	/*int temp;

	printf("Enter the temperature: ");
	scanf("%d", &temp);

	if (temp >= 100)
	printf("above boiling point of water.\n");
	
	else 
	printf("below the boiling point of water.\n");
	*/

	/* int num, possum, negsum;
	if (num >= 0)
	num = num + possum;
	else 
	num = num + negsum;
	*/

	/*
	if (slope < 0.5)
	variable = 0;
	else
	variable = 1;*/ 

	/* float num1, num2, approx;
	
	if (num1 - num2 < 0.001)
	approx = 0;
	else 
	(num1 - num2) / 2.0;
	*/

	/* if (tem1 - temp2 > 2.3)
 	error = (temp1 - temp2) * factor;

	if (x > y && z < 20)
	printf("%d", p);

	if (distance > 20 && distance < 35)
	printf("%d", time);

	2.a
	if (ace < 25)
	sum = sum + a;
	else
	count = count + 1;

	b.
	if (c == 15)
	{
	volts = 5;
	pwr = 10;
	}
	else
	{
	volts = 16;
	pwr = 25;
	}
	
	c.
	if (id > 22)
	factor = .7;

	d.
	if (count == 10)
	{
	average = sum / count;
	
	printf("%d", average);
	}
	*/
	
	float taxable, taxes;
	
	printf("Please type in the taxable income: ");
	scanf("%f", &taxable);
	
	if (taxable <= LIMIT)
		taxes = REGRATE * taxable;
	else
		taxes = HIGHRATE * (taxable - LIMIT) + FIXED;

	printf("Taxes are$%7.2f\n", taxes);
	 
	int num1, num2;
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);
 	__fpurge(stdin);
	printf("Please enter the second number: ");
	scanf("%d", &num2);

	if (num1 > num2)
	printf("The first number is greater.\n");
	else
	printf("The first number is smaller.\n");	

	int nyrs;
	
	printf("Please enter the number of years: ");
	scanf("%d", &nyrs);

	if (nyrs > 2)
	printf("The interest rate is 8.5%\n");
	else
	printf("The interest rate is 7%\n");	

	
	int grade;
	
	printf("Enter the student's grade: ");
	scanf("%d", &grade);
	
	if (grade >= 70)
	printf("A passing grade.\n");
	else
	printf("A failing grade.\n");


} 
