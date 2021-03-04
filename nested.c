#include<stdio.h>
#define NUMPLAYERS 5
#define NUMGAMES 3
void main(void)
{

	/*int i,j;
	
	for (i = 1; i <= 5; ++i)
	{
		printf("i is now: %d\n", i);
		{for (j = 1; j <= 4; j++)
			printf("j = %d ", j);
		}
	printf("\n");
	}*/


	/*int i, j;
	float grade, total, average;

	for (i = 1; i <= NUMSTUDENTS; i++)
	{
	total = 0;
	for (j = 1; j <= NUMGRADES; j++)
		{
		printf("Enter examination grage %d for student %d: ", j, i);
		scanf("%f", &grade);
		total = total + grade;
		}
	average = total / NUMGRADES;
	printf("  The average for student %d is %f\n\n", i, average);
	}*/

	/* Question 1 */
	/* 4 Experiments, each contain 6 test results */
	/* Compute the average and display for each experiment */

	/*	int i, j;

	float exp, test, average, total;

	for (i = 1; i <= NUMEXP; i++)
	{
	total = 0;
	for (j = 1; j <= NUMTEST; j++)
		{
		printf("Enter results for Experiment %d, test %d: ", i, j);
		scanf("%f", &test);
		total = total + test;
		}
	average = total / NUMTEST;
	printf("The average for Experiment %d is %f\n", i, average);
	}
	*/
	/* Question 3 */
	/* Team of 5 players */
	/* Each player bowls 5 games */
	/* Enter each players scores and display averages */
	
	/*	int a, b;
	float scores, total_3, avg, team_total = 0, team_avg;

	for (a = 1; a <= NUMPLAYERS; a++)
	{
		total_3 = 0;
		for (b = 1; b <= NUMGAMES; b++)
		{
			{
			if (a == 1) 
			printf("Enter Game %d score for %dst bowler: ", b, a);
			else if (a == 2)
			printf("Enter Game %d score for %dnd bowler: ", b, a);
			else if (a == 3)
			printf("Enter Game %d score for %drd bowler: ", b, a);
			else if (a == 4 || a == 5)
			printf("Enter Game %d score for %dth bowler: ", b, a);
			}
		scanf("%f", &scores);
		total_3 = total_3 + scores;
		}
	avg = total_3 / NUMGAMES;
	team_total = team_total + avg;
	printf("The average for Bowler %d is: %f\n", a, avg);
	}
	team_avg = team_total / NUMPLAYERS;
	printf("The average for the team is: %f\n", team_avg);
		
	*/

	/* Question 6 */
	/* $1000 invested in bank account for 10 years */
	/* Display amounts for 6% to 12% interest rates */
	/* With 1% increment */

	int y;
	float i, balance = 25500, interest, eoy_balance;

	for (i = 1.5; i <= 3.5; i++)
	{
		eoy_balance = 0;
		for (y = 1; y <= 20; y++)
		{
		interest = balance * (i/100);
		eoy_balance = balance + interest;
		balance = eoy_balance;
		}
	y = y - 1;
	printf("Balance for interest rate  %2.1f%, for %d years is $%7.2f\n", i, y, balance);
	}


	/* Question 7 */
	/* Salary units 10,000 for income tax */
	/* And no of dependents */
	/* Formula Deduction = Dependents * 500 + 0.05 * (50000 - salary) */
	/* No deductions beyond 50,000 or less than 10,000 */

	int d;
	float deduction, salary;
	
	printf("        |<--------------------Deduci");
	printf("ons----------------------->|\n");
	printf(" Salary   |	0	1	2	");
	printf("3	4	5  |\n");
	printf("            -------- -------- -------- ------- --------");
	printf("  --------\n");
		
	for (salary = 10000; salary <= 50000; salary = salary + 10000)
	{
	printf("$%5.0f      ", salary);
		deduction = 0;
		for (d = 0; d <= 5; d++)
		{
		deduction = d * 500 + 0.05 * (50000 - salary);
		printf("%8.2f ", deduction);
		}
	printf("\n");	
	}
	
	printf("\n");
}
