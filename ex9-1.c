#include<stdio.h>
void main(void)
{
	int i, j, val[3][4] = {8, 16, 9, 52, 3, 15, 27, 6, 14, 25, 2, 10};
	int sum;

	for (i = 0; i < 3; i++)
	{
	sum = 0;
	printf("\n");
		for (j = 0; j < 4; j++)
		{
		sum = sum + val[i][j];
		}

	printf("Sum = %3d\n", sum);
	}

	/* Excercise4 */
	/* Program that adds equivalant elements of 2 dimensional array */
	/* name first and second. Both arrays should have 2 rows, 3 colomns */

	/* Initialize each array */
	/* Create a for loop for row count and nest column loop */
	/* Apply addition expression and display result */

	
	int first[2][3] = {16, 18, 23, 54, 91, 11};
	int second[2][3] = {24, 52, 77, 16, 19, 59};
	int k, m;

	for (k = 0; k < 2; k++)
	{
		for (m = 0; m < 3; m++)
		printf("%d + %d = %2d\n", first[k][m], second[k][m],first[k][m] + second[k][m]);
	}





}
