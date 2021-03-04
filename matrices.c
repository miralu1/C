#include<stdio.h>
#define MAXNUM 20
void main(void)
{

	int rows, cols, i, j;
	float num, matrix[MAXNUM][MAXNUM];

	printf("\nEnter the number of rows and columns of the matrix: ");
	scanf("%d %d", &rows, &cols);
	
	printf("Enter the elements of matrix, row by row: ");
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			scanf("%f", &matrix[i][j]);
		
	printf("Enter the scalar multiplier: ");
	scanf("%f", &num);

	/* multiply each matrix element by the scalar multiplier */
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			matrix[i][j] = num * matrix[i][j];

	printf("\nDisplay of multiplied matrix elements:\n");
	for (i = 0; i < rows; i++)
	{
	printf("\n");
	for (j = 0; j < cols; j++)
		printf("%7.3f ", matrix[i][j]);
	}
	printf("\n");

}
