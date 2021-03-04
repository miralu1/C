#include<stdio.h>
void main(void)
{
	/* Question 1 */
	/* a. for (i = 1; i <= 20; i = i + 1) */
	/* b, for (icount = 1; icounf <= 20; icount = icount + 2) */
	/* c. for (J = 1; J <= 100; J = J + 5) */
	/* d. for (icount = 20; icount <= 1; icount = icount + -1) */
	/* e. for (count = 1.0; count <= 16.2; count = count + 0.2) */

	/* Question 2 */
	
	/* Question 3 */
	
	int total = 0, i;

	for (i = 1; i <= 10; i = i + 1)
	{
	total = total + 1;
	printf("%d\n", total);
	}

	int totalb = 1, count;
	for (count = 1; count <= 10; count = count + 1)
	{
	totalb = totalb * 2;
	printf("%d\n", totalb);
	}

	int totalc = 0, ic;
	for (ic = 10; i <= 15; i = i + 1)
	{
	totalc = totalc + i;
	printf("%d\n", totalc);
	}

	int totald = 50, id;
	for (id = 1; id <= 10; id = id + 1)
	{
	totald = totald - id;
	printf("\n%d\n", totald);
	}
	printf("\n\n");
	int totale = 1, icnt;
	for (icnt = 1; icnt <= 8; ++icnt)
	{
	totale = totale * icnt;
	printf("%d\n", totale);
	}
	printf("\n");
	float totalf = 1.0 ;
	int j;
	for (j = 1; j <=5; ++j)
	{
	totalf = totalf / 2.0;
	printf("%f\n", totalf);
	}

	/* Question 4 */
	printf("\n\n");	
	int i4;
	for (i4 = 20; i4 >= 0; i4 = i4 - 4)
	printf ("%d ", i4);
	
	printf("\n");
	
	/* Question 5 */
	/* Produce a table of number 0 through 20, increments of 20 with sqr and cube */
	
	int num5;

	printf("NUMBER\tSQUARE\tCUBE\n");
	printf("------\t------\t----\n");
	for (num5 = 0; num5 <= 20; num5 = num5 + 2)
	printf("%d\t%d\t%d\t\n", num5, num5 * num5, num5 * num5 * num5);
	
	printf("\n");
	printf("\n");

	/* Question 6 */
	
	int num6;
	printf("NUMBER\tSQUARE\tCUBE\n");
	printf("------\t------\t----\n");
	for (num6 = 10; num6 >= 1; num6 = num6 - 1)
	printf("%d\t%d\t%d\t\n", num6, num6 * num6, num6 * num6 * num6);
}


