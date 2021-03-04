#include<stdio.h>
#define MAXNUMS 8
void main(void)
{
	printf("Excercises 5.2\n");
	int count, maxval;
	float num, total;

	printf("This program will ask you to enter some numbers.\n");
	
	printf("Enter number of input: ");
	scanf("%d", &maxval);
	__fpurge(stdin);
	count = 1;
	total = 0;
	
	while (count <= maxval)
	{
	printf("Enter a number: ");
	scanf("%f", &num);
	total = total + num;
	printf("The total is now: %f\n", total);
	count = count + 1;
	}

	printf("The entire total is: %f\n");
	printf("\n\n");

	/* Question 3 */
	/* Convert Celsius degrees to Fahrenheit */
	/* request starting celsius values */
	/* number of conversions to be made */
	/* increment between Celsius degrees */
	/* fahrenheit = (9.0/5.0) * celsius + 32.00 */
	
	float celsius_c;
	float celsius, celsius_e, fahrenheit, dinc;
	__fpurge(stdin);
	printf("Enter starting Celsius value, ending Celsius value and increments of degrees: \n");
	scanf("%f %f %f", &celsius, &celsius_e, &dinc);

	

	printf("Celsius\tFahrenheit\t\n");
	while (celsius <= celsius_e)
	{
	fahrenheit = (9.0 / 5.0) * celsius + 32.00;
	printf("%4.2f\t%4.2f\n", celsius, fahrenheit);
	celsius = celsius + dinc;
	}
	
	
	/*int count1;
	float num1, total1, average1;
	
	printf("This program will ask you to enter some numbers.\n");

	count1 = 1;
	total1 = 0;
	while (count1 <= MAXNUMS)
	{
	printf("Enter a number: ");
	scanf("%f", &num1);
	total1 = total1 + num1;
	count1++;
	}
	
	count1 = count1 - 1;
	average1 = total1 / count1;
	
	printf("The average of the numbers is %f\n", average1);*/
	
	/* QUESTION 11 */
	/* Accept mileage and gallon value */
	/* Calculate mile per gallon for that segment of trip */
	/* difference of mileages divided by number of gallons */

	float mileage_s, mileage_e, gallon, mpg;
	float eof_mileage = 999999;

	__fpurge(stdin);
	
	mileage_s = 1.0;

	while(mileage_s < eof_mileage)
	{
	printf("Enter Starting Mileage: ");
	scanf("%f", &mileage_s);
	if (mileage_s < eof_mileage)
	{
	__fpurge(stdin);
	printf("Enter Ending Mileage: ");
	scanf("%f", &mileage_e);
	__fpurge(stdin);
	printf("Enter Gallons used: ");
	scanf("%f", &gallon);
	mpg = (mileage_e - mileage_s) / gallon;
	printf("MPG for this trip is: %6.2f\n", mpg);
	}
	}



	

}
	
