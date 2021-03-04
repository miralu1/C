#include<stdio.h>
#include<math.h>

void main(void)
{
	/* Write a program which calculates monthly payment due on an outstanding car loan */
	/* Monthly payment = (loan amoun) * (Monthly interest reate) / 1.0 - (1.0 + Monthly interest rate)pow-(no. of months) */
	/* Monthly interest = Annual Percentage aret / (12.0 * 100)*/
	/* Prompt user for amount of the loan, annual percentage rate, and the number of years of the loan */
	
	/* Psuedocode: */
	/* Initialize floats for loan, percentage rate, years, ... */
	/* Ask user for loan, annual percentage rate and years of the loan */
	/* Calculate monthly interest rate and then calculate monthly payment */
	/* Display table using the monthly payment and amount of loan and payment number */
	
	float loan_amount, ann_percent, monthly_payments, monthly_rates;
	int months;

	printf("\n*************** Loan Amortization Table 1.0 ****************\n");
	printf("This program is designed to calculate monthly payments and\nprovide a table of longterm outlook.\n");
	printf("\nPlease enter the amount of the loan: ");
	scanf("%f", &loan_amount);
	printf("Please enter the annual percentage rate: ");
	scanf("%f", &ann_percent);
	printf("%d", &months);

	/* Calculate Monthly Interest Rate */
	
	monthly_rates = ann_percent / (12.0 * 100)monthly_rates = ann_percent / (12.0 * 100);
	monthly_payments = loan_amount * monthly_rates / 1.0 - pow(-months)(1.0 + monthly_rates);
	/* Page 255 */
