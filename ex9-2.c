#include<stdio.h>
void main(void)
{
	/* Find A+B and A-B */

	/* a. */

	int A[2][2] = {1, 3, 0, -1}, B[2][2] = {1, -2, 0, 1};
	int AB[2][2], i, j, k;

	for (i = 0; i < 2; i++)
		{
		for (j = 0; j < 2; j++)
		AB[i][j] = A[i][j] + B[i][j];
		}
	for (i = 0; i < 2; i++)
		{
		printf("\n");
		{
		for (j = 0; j < 2; j++)
		printf("%d ", AB[i][j]);
		}
		}
		printf("\n");
}
