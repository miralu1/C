#include<stdio.h>
#define MAXNUMS 4
void main(void)

{
	int count;
	
	count = 2;
	while (count <= 10)
	{
	printf("%d ", count);
	count = count + 2;
	}
	/* 3 */
	
	int num = 0;
	printf("\n\n");
	/*while (num <= 20)
	{
	num++;
	printf("%d ", num);
	}
	printf("\n");*/

	while (num <= 20)
	{
	printf("%d ", num);
	num++;
	}
	printf("\n");
	
	/* 4 */
	/* Convert gallon to liter */
	/* Display gallon from 10 to 20 with 1 gallon increments */
	/* 1 gallon = 3.78 liters */
	
	int gallon = 10;
	float liter = 3.78;
	printf("Gallon\tLiter\n");
	printf("------\t-----\n");
	while (gallon >= 10 && gallon <= 20)
	{
	printf("%4d\t%4.2f\n", gallon, liter*gallon); /* Displays initial gallon value and how many liters in initial value */
	gallon++; /* statement increments to add 1 gallon in the next loop */
	}
	printf("\n");
	
	int pnum1, num1 = 0;
	while (num1 <= 9)
	{
		pnum1 = num1;
		while (pnum1 > 0)
		{
			printf(" ");
			pnum1--;
		}
	printf("%d\n",num1);
	num1 = num1 + 1;
	}
	printf("\n");
	/* 6 */
	int star = 0, pstar;

	while (star <= 4)
	{
		pstar = star;
		while (pstar > 0)
		{
		printf(" ");
		pstar--;
		}
	printf("****\n");
	star++;
	}
	
	int star1 = 4, pstar1;
	while (star1 > 0)
	{
		pstar1 = star1;
		while (pstar1 > 0)
		{
		printf(" ");
		pstar1--;
		}
	
	printf("****\n");
	star1--;
	}
	printf("\n");

	/* 7 */
	/* Convert feet to meters */
	/* Display feet from 3 to 30 in 3ft increment and meter equivalent */
	/* 1 meter = 3.25 feet */

	float feet = 3, meter = 3.25;
	printf("Feet\tMeter\n");
	printf("----\t-----\n");
	while (feet <=30)
	{
	printf("%4.2f\t%6.2f\n", feet, meter*feet);
	feet = feet + 3;
	}
	/* 8 */
	/* Machine cost $28,000 */
	/* Depreciation rate $4000 per year for 7 years */
	/* Display table with end of year and accumalated depreciation */

	int machine = 28000, year = 1, depr = 4000, eoyv, ad= depr;

	printf("    \t            \tEnd-of-Year\tAccumulated\n");
	printf("Year\tDepreciation\t  Value    \tDepreciation\n");
	printf("----\t------------\t-----------\t------------\n");
	
	while (year <= 7)
	{
	eoyv = machine - depr;
	printf("%2d\t$%10d\t$%10d\t$%10d\n", year, depr, eoyv, ad);
	machine = eoyv;
	year++;
	ad = ad + 4000;
	}
	
	printf("\n Excercise 9 \n\n");

	/* car speed 55 m/h for 4 hours */
	/* Display distance driven in miles for miles 0.5, 1 and 1.5 miles until the end of trip*/
	float distance, hours = .5, speed = 55.00;
	
	
	while (hours <= 4)
	{
	distance = speed * hours;
	printf("%6.2f miles of distance traveled in %3.2f hours\n", distance, hours);
	hours = hours + .5;
	}

	
	printf("\n\n");

	/* Question 10 */

	/* Approximate - Celsius = (Fahrenheit - 30) / 2 */
	/* Exact - Celsius = (5/9) (f-32) */
	/* Start Fahrenheit temp 0 */
	/* Determine approximate equivalant value Celsius differs from exact equivalant value
 * 	by more than 4 degrees*/

	/* Create 2 vars for approx and exact */
	/* Calculate the difference */
	/* Use while loop to ensure program exits if diffreence > 4 */

	float fahren, cels_a, cels_e;

	__fpurge(stdin);
	printf("Enter Fahrenheit: ");
	scanf("%f", &fahren);

	cels_a = (fahren - 30.00) / 2.00;
	cels_e = (5.0 / 9.0) * (fahren - 32.00);
	
	float diff = cels_a - cels_e;

	while (diff <= 4 && diff >= -4) 
	
	{
	printf("Approximate Celsius Degrees: %4.2f\n", cels_a);
	printf("Exact Celsius Degree: %4.2f\n", cels_e);
	printf("Difference: %4.2f\n", diff);
	diff = diff + 4;
	}

	printf("\n\nProgram 5.5\n");

	int cunt;
	float numb;
	
	printf("This program will ask you to enter some numbers.\n\n");
	
	cunt = 1;
	float total = 0;
	
	while (cunt <= MAXNUMS)
	{
		printf("Enter a number: ");
		scanf("%f", &numb);
		total = total + numb;
		printf("The total is now %f\n", total);
		cunt++;
	}
	
	cunt = cunt - 1;
	float average = total / cunt;
	printf("the final total is %f\n and the average is %f\n", total, average);

	


}
