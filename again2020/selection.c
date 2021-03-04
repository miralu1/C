#include<stdio.h>

main(void)
{

	/* If money is leftin a particular bank account for more than 2 years */
	/* interest rate given by a bank is 8.5% */
	/* else the interest rate is 7.5% */
	/* Write a C program that uses scanf function to accept the number of years into a variable nyrs */
	/* and display the appropriate interest rate depending on the input value. */

	/* Pseudocode*/
	/* Accept input for money and number of years left in bankaccount*/
	/* If years greater than 2, then interest rate is 8.5% */
	/* else interest rate is 7.5% */
	/* Display the interest rate */

	int nyrs;
	
	printf("Enter the number of years for bank account: ");
	scanf("%d", &nyrs);

	if (nyrs >= 2)
		printf("Interest rate for this account is 8.5%\n");
	else
		printf("Interest rate for this account is 7.5%\n");

}
