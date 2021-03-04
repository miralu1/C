#include<stdio.h>
void main(void)
{

	/* Question 1 */
	/* Accept 6 fahrenheit temperatures */
	/* Convert each value to its Celsius equivalant */
	/* Before the next value is requested */
	/* Celsius = (5.0/9.0) * (Fahrenheit - 32) */

	/*float fahrenheit, celsius, count;

	for (count = 1; count <= 6; count++)
	{
	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
	printf("Fahrenheit: %4.2f\tCelsius: %3.2f\n", fahrenheit, celsius);
	}*/

	/* Question 2 */
	/* Accept 10 separate value of gallons */
	/* convert each value to its liter equivalant */
	/* 1 gallon = 3.785 liters */

	/* float gallon, liter;
	int count_3, count_2;
	printf("Enter number of times gallons will be converted: ");
	scanf("%d", &count_3);	
	for (count_2 = 1; count_2 <= count_3; count_2++)
	{
	printf("Enter Gallon value: ");
	scanf("%f", &gallon);
	
	liter = gallon * 3.785;
	printf("There are %6.2f liters in %f gallon of water\n", liter, gallon);
	}*/

	/* Question 5 */
	/* display average of positive and negative numbers */
	/*
	float i, post_count, neg_count;
	float usenum, postot, negtot;

	postot = 0, negtot = 0;
	
	for (i = 1.0; i <= 5.0; ++i)
	{
	printf("Enter a number (positive or negative): ");
	scanf("%f", &usenum);

	if (usenum > 0.0)
		{
		postot = postot + usenum;
		post_count = post_count + 1.0;
		}
	else if (usenum < 0.0) 
		{
		negtot = negtot + usenum;
		neg_count = neg_count + 1.0;
		}
	}
	printf("The positive total is %f\n", postot);
	printf("The negative total is %f\n", negtot);
	printf("The postive average is %f\n", postot/post_count);
	printf("The negative average is %f\n", negtot/neg_count);

	printf("\n\n");
	*/
	/* Question 7 */
	/* Select and display first 20 integer numbers */
	/* evenly divisble by 3 */

	int num7, num_diviser, count7;

	for (num7 = 1, count7 = 1; count7 <= 20; count7++)
	{
	num_diviser = num7%3;
	 { if (num_diviser == 0)

		printf("%d\n", num7);
	
	else if (num_diviser > 0)
		{
		if (count7 == 1)
		count7 = 1;		
		else 
		count7 = count7 - 1;

		}
		
	}
	num7 = num7 + 1;
	}	
}

