#include<stdio.h>
void main(void)
{
	/* 2.a
 * 	if (grade == 'A')
 * 	{
 * 		if (weight > 35)
 * 			bin = 1;
 * 	}
 * 	else
 * 	t = s + a; */

	/* 2.b
 * 	sum = 0;
 * 	if (cound < 5)
 * 		{
 * 		if (weight < 50)
 * 			fail = fail + 1;
 *		}
 *		

	int angle;
	printf("Enter the Angle's Degree: ");
	scanf("%d", &angle);

	if (angle < 90)
	printf("The angle is an acute angle.\n");

	else if (angle == 90)
	printf("The angle is a right angle.\n");

	else if (angle > 90)
	printf("The angle is an obtuse angle.\n");

	__fpurge(stdin);

	int credit;
	printf("Enter student credits: ");
	scanf("%d", &credit);


	if (credit < 32)
	printf("Freshmen\n");

	else if (credit >= 32 && credit <= 63)
	printf("Sophmore\n");

	else if (credit >=64 && credit <= 95)
	printf("Junior\n");

	else if (credit >= 96)
	printf("Senior\n");


	/* Ex 5 */

	int num_grade;
	char letter_grade;

	printf("Enter the Numerical Grade: ");
	scanf("%d", &num_grade);

	if (num_grade >= 90)
	letter_grade = 'A';

	else if (num_grade < 90 && num_grade >= 80)
	letter_grade = 'B';

	else if (num_grade < 80 && num_grade >= 70)
	letter_grade = 'C';

	else if (num_grade < 70 && num_grade >= 60)
	letter_grade = 'D';

	else if (num_grade < 60)
	letter_grade = 'F';
	printf("Student's Grade is: %c\n", letter_grade);

	__fpurge(stdin);
	float interest;
	float time;

	printf("Enter the time on Deposit: ");
	scanf("%f", &time);

	if (time >= 5.0)
	interest = 0.095;

	else if (time < 5.0 && time >= 4.0)
	interest = 0.09;

	else if (time < 4.0 && time >= 3.0)
	interest = 0.085;
	
	else if (time < 3.0 && time >= 2.0)
	interest = 0.075;
	
	else if (time < 2.0 && time >= 1.0)
	interest = 0.065;

	else
	interest = 0.055;

	printf("The interest rate is :%f\n", interest);


	
	/* Accept a number followed by letter */
	/* If letter following number is 'f', program to treat number as Farenheit degrees */
	/*  Convert the number to Celsius */ 
	/* Print and display message results */
	/* If the letter following number is 'c', program to treat as Celsius degree */
	/* Convert number to Celsius */
	/* Print results */
	/* If letter is neither 'c' or 'f', print 'Invalid Data Entry' */

	float temp, farenheit, celsius;
	char letter_temp;
	printf("Enter the temperature and letter indicating F for Farenheit and C for celsius: ");
	scanf("%f %c", &temp, &letter_temp);

	if (letter_temp == 'F')
	{
	celsius = (5.0 / 9.0) * (temp - 32.0);
	printf("The temperature in Celsius is %4.2f\n", celsius);
	}

	else if (letter_temp == 'C')
	{
	farenheit = (9.0 / 5.0) * (temp + 32.0);
	printf("The temperature in Farenheit is %4.2f\n", farenheit);
	}

	else
	printf("Invalid Data entered.\n");

	/* Excercise 8 */
		
	
}
