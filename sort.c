#include<stdio.h>
#define RECORDS 5
void main(void)
{
	/* Write a program which utilizes pointers, functions and arrays */
	/* Problem - A person wants to lose weight. He records his weight every other day and every month */
	/* Sometimes he records it with clothes on and sometimes clothes off. This affects calculation and precision */
	/* Clothes weight around 2-3lbs. Calculate the avg weight after every 5 records adjusted for precise records. */
	/* User inputs weights */
	/* Give option of clothes added */
	/* Weight stored in array name w_log for no clothes */
	/* Weight stored in array name wc_log for clothes on */
	/* Call function to adjust clothes weight */
	/* Function subtracts cloth weight from the record and returns value */
	/* Call function to calculate weight from array w_log and wc_log for a total of 5 records */
	/* Display avg weight */
	
	float weight[RECORDS], sum; 
	int w_code, i, j;
	void c_weight(float *);
	
	printf("\nWeight Management Program\n");
	printf("-------------------------\n\n");
	for (i = 0; i < RECORDS; i++)
	{
	printf("Choose weight log option: \n");
	printf("1. Weight in lbs with no clothes.\n");
	printf("2. Weight in lbs with clothes on.\n");
	scanf("%d", &w_code);
	printf("\n");
	
	/* User inputs w1 -> selection of if statement routes value */
	/* If no clothes -> value stored in array weight */
	/* If with clothes -> value is adjusted by function and then stored in weight array */
	/* After 5 records, input stops and avg is displayed */
	
	if (w_code == 1)
	{
	printf("Enter weight with no clothes: ");
	scanf("%f", &weight[i]);
	printf("\n");
	
	}
	else if (w_code == 2)
	{
	printf("Enter weight with clothes: ");
	scanf("%f", &weight[i]);
	printf("\n");
	c_weight(&weight[i]);
	}
	}
	
	sum = 0;
	for (j = 0; j < RECORDS; j++)
	{
	printf("Weight %d - %3.2f\n", j + 1, weight[j]);
	sum = sum + weight[j];
	}
	float avg = sum / i;
	printf("Average adjusted weight is: %3.2f\n", avg);
}

void c_weight(float *clothes)
{

	float weight = *clothes - 2.5;
	*clothes = weight;

}
