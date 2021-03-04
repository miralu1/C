#include<stdio.h>
#define DWORKS 2.57
#define CHANGE 0.25
#define INTEREST .05
void main(void)
{
	int count;
	
	count = 1;
	
	while (count <= 10)
	{
	printf("%d ", count);
	count++;
	}
	printf("\n");

	/* Question 7 */
	
	/* Convert feet to meters */
	/* display feet from 3 - 30 in 3ft increments */
	/* and the corresponding meter equivalant */
	/* 3.21ft = 1 meter */

	float feet, meter;

	feet = 3.0,
	printf("Meter\tFeet\n");
	printf("-----\t-----\n");
	while (feet <= 30)
	{
	meter = feet / 3.25;
	printf("%4.2f\t%5.2f\n", meter, feet);
	feet = feet + 3;
	}
	

	/*	float grade, total = 0;
	
	printf("Enter a Grade: ");
	
	while (scanf("%f", &grade) != EOF)
	{
	total = total + grade;
	printf("Enter a grade: ");
	}
	printf("\nThe total of grades is %f\n", total);
	

	 Question 1
	 Display multiples of 3 backward from 33 to 3, inclusive */

	int three;
	char let;
	for (three = 33; three >= 3; three -= 3)
	printf("%d ", three);
	printf("\n");
	for (let = 'Z'; let >= 'A'; let--)
	printf("%c ", let);
	
	printf("\n\n");

	/* Question 5 */
	/* Outstanding balance = $8000 */
	/* Monthly payments = $300 includes interest and principle*/
	/* Monthly interest = .10/12 of outstanding balance */
	/* Remaining balance from monthly is applied to principle */
	/* Display beginning balance, interest paymetn, */
	/* principle payment and remaining loan balance after each payment*/

	double beg_balance = 8000.0,monthly_pay = 300.0, int_pay, princ_pay, end_bal;
	
	end_bal = beg_balance;
	printf("Beginning\tInterest\tPrinciple\tEnding loan\n");
	printf(" balance \t Payment\t Payment \t  Balance\n");
	printf("---------\t--------\t---------\t------------\n");
	while (end_bal > 0.0)
	{
		int_pay = beg_balance * (0.10/12.0);
		if (monthly_pay > end_bal)
			{
			monthly_pay = end_bal + int_pay;
			}
		princ_pay = monthly_pay - int_pay;
		end_bal = beg_balance - princ_pay;
		printf("%1f\t%1f\t%1f\t%1f\n", beg_balance, int_pay, princ_pay, end_bal);
	
				
	beg_balance = end_bal;
	}
	
	printf("\n\n");	

	/* Question 8 */

	/* 1 US Dollar = 2.57 dworks */
	/* Create an exchange table with user provided */
	/* Min and max values */

	float count1, mindollars, mindworks, maxdollars, maxdworks;
	
	printf("Enter Minimum and Maximum amount of USD: ");
	scanf("%f %f", &mindollars, &maxdollars);

	printf("USD\tDworks\n");
	printf("---\t------\n");
	for (; mindollars <= maxdollars;mindollars += CHANGE)
		{
		mindworks = mindollars * DWORKS;
		printf("%4.2f\t%4.2f\n", mindollars, mindworks);
		
		}
		

	/* Question 11 */
	/* Print decimal,octal and hexadecimal values */
	/* when user enters 2 char values */
	/* The second character must be a later character */

	char leta, letb;
	__fpurge(stdin);
	printf("\n\nEnter 2 characters: ");
	scanf("%c %c", &leta, &letb);
		
	if (leta < letb)
	printf("%c: %d %o %x \n%c: %d %o %x\n", leta, leta, leta, leta, letb, letb, letb, letb);
	else
	{
	while (letb < leta)
	{printf("2nd letter must be a later character\n");
	printf("Enter 2 Characters again: ");
	__fpurge(stdin);
	scanf("%c %c", &leta, &letb);
	if (letb > leta)
	printf("%c:\t%d\t%o\t%x\t\n%c:\t%d\t%o\t%x\t\n", leta, leta, leta, leta, letb, letb, letb, letb);
	}
	}


	/* Question 15 */
	/* King gives beggar 1 cents each day for 64 days */
	/* He doubles the amount every day */
	/* Write a program that displays how much is being each day */

	double money = .01;
	int day;
	
	printf("Day\t Amount\n");
	
	for (day = 1; money <= 1000000; day++)
	{
		printf("%3d\t%1f\n", day, money);
		money = money * 2;
	}
		printf("%3d\t%1f\n", day, money);

	printf("\n\n");
	
	/* Question 16 */
	/* Manhattan island purcashed in 1626 for $24 */
	/* Dutch bank has a 5% interest each year */
	/* Display a table consisting of a 20-year period*/
	/* ending in 2006 */

	double cost = 24.0, intp;
	int year, year_ind;
	printf("Year\tCost\n");
	for (year = 1626; year <= 2006; year += 20)
	{
		printf("%d\t%1f\n", year, cost);
		year_ind = 0;
		for (year_ind = 1; year_ind <= 20; year_ind++)
			{
			intp = cost * INTEREST;
			cost = cost + intp;
			}
	}
}
