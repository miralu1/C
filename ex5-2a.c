#include<stdio.h>
#define MAXBOOKS 3
void main(void)
{
	printf("Excercises 5-2 Continued \n\n");

	/* Convert Celsius to Fahrenheit */
	/* Request starting Celsius value, number of conversions and */
	/* increment between Celsius values */
	/* Display Celsius value and corresponding Fahrenheit values */
	/* Fahrenheit = (9.0 / 5.0) * Celsius + 32.0 */

	float celsius, celsius_e, celsius_c, fahrenheit;
	int inc;

	printf("Enter Starting Celsius Degree: ");
	scanf("%f", &celsius);
	printf("Enter Ending Celsius Degree: ");
	scanf("%f", &celsius_e);
	printf("Enter incremental degrees: ");
	scanf("%d",&inc);

	printf("\nCelsius\tFahrenheit\n");
	printf("-------\t----------\n");

	celsius_c = celsius;
		
	while (celsius_c <= celsius_e)
	{
	fahrenheit = (9.0 / 5.0) * celsius + 32.0;
	printf("%4.2f\t%4.2f\n", celsius, fahrenheit);
	celsius = celsius + inc;
	celsius_c = celsius;
	}
	
	__fpurge(stdin);

	/* Question 14 */
	/* Accept data for each book */
	/* Book ID number */
	/* Inventory balance at beginning of month */
	/* No. of copies recieved during the month */
	/* No. of copies sold during the month */
	/* Calculate new balance : */
	/* inventory balance + (no. copies recived - no. of copies sold) */
	/* 3 book data to be include */

	/*	int count = 1, book_id, beg_balance, monthly_copies, sold_copies;
	int new_balance;
	
	while (count <= MAXBOOKS)
	{
	printf("Enter Book ID: ");
	scanf("%d", &book_id);
	printf("Enter Beginning Balance: ");
	scanf("%d", &beg_balance);
	printf("Enter Monthly copies recieved: ");
	scanf("%d", &monthly_copies);
	printf("Enter copies sold: ");
	scanf("%d", &sold_copies);

	new_balance = beg_balance + (monthly_copies - sold_copies);

	printf("Book ID: %d\tNew Balance: %d\n", book_id, new_balance);
	count++;
	}
	*/

	/* PROGRAM 5.11 */

	int count1;
	
	count1 = 2;
	for ( ; count1 <= 20; count1 = count1 + 2)
	printf("%d \n", count1);

}
