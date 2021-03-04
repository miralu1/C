#include<stdio.h>
void main(void)
{
	/* Multiplay A * B if matrices are in order */
	/* A = (3 x 3), B = (3 x 5) */
	/* Adjacent matrices are equal 3 = 3 */

	int A[3][3] = {23, 1, 4, 5, -1, 34, 10, 14, 3};
	int B[3][5] = {4, -2, 5, 10, 19, 2, 5, 6, 1, 16, 9, 12, 17, 21, -5};
	int i, j, k, sum, product[3][5];

	for (i = 0; i < 3; i++)
		{
		for (j = 0; j < 5; j++)
			{
			sum = 0;
			for (k = 0; k < 3; k++)
				sum = sum + A[i][k] * B[k][j];
				
		product[i][j] = sum;	
			}
		}

	for (i = 0; i < 3; i++)
		{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf("%3d ", product[i][j]);
		}
		
		printf("\n");
}
