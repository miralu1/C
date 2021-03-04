#include<stdio.h>
void main(void)
{
	/* Question 8 */
	/* Child gets $10 on his 12th birthday */
	/* And double the gift on every subsequent birthdays */
	/* Until it exceeds $1000.*/
	/* Determine how old child will be when the last amount */
	/* And the total amount she recieved including last birthday */

	/* Create a loop with limit of 1000 */
	/* loop starts at 10 and doubled each each year */
	/* Also start count from 12 for the age */
	/* Create an Add statement for total recieved */

	int age, gift_l, gift, gift_t = 0;
	
	for (age = 12, gift = 10; gift <= 1000; )
	{
	gift_t = gift_t + gift;
	printf("Age: %d\t Gift amount: %d\n", age, gift);
	age++;
	gift = gift * 2;
	if (gift > 1000)
	{
	gift_l = gift / 2;
	age--;
	}
	}	
	
	printf("%d %d %d\n", age, gift_l, gift_t);


	/* Question 13 */
	/* Convert Fahrenheit to Celsius with 5 degree increments */
	/* Request initial value and total conversions */
	/* Celsius = (5.0/9.0) * (fahrentheit - 32.0) */
	
	float celsius, fahrenheit,  inc = 5;
	int conv, count;

	printf("\n\nEnter Fahrenheit & Total Conversions: ");
	scanf("%f %d", &fahrenheit, &conv);

	for (count = 1; count <= conv; count++)
	{
	celsius = (5.0/9.0) * (fahrenheit - 32.0);
	printf("Fahrenheit: %f\tCelsius: %f\n", fahrenheit, celsius);
	fahrenheit = fahrenheit + inc;
	}
}

		
