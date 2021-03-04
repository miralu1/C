#include<stdio.h>
#define MAXELS 5
void main(void)

{
	/*int i, max, nums[MAXELS] = {2, 18, 1, 27, 16};
	max = nums[0];
	for (i = 1; i < MAXELS; i++)
		if (max < nums[i])
			max = nums [i];
	printf("The maximum value is %d\n", max);
	printf("\n\n");*/

	/* Excercise 8-2 */
	/* Question 1 */
	/* a. int grades[] = {89, 75, 82, 93, 78, 95, 81, 88, 77, 82}; */
	/* b. double amounts[5] = {10.62, 13.98, 18.45, 12.68, 14.76}; */
	/* c. double interest_rates[100] = {6.29, 6.95, 7.25, 2.35, 7.40, 7.42}; */
	/* e. float tempt[64] = {78.2, 69.6, 68.5, 83.9, 55.4, 76.0, 49.8, 58.3, 62.3, 71.6}; */
	/* d. char code[15] = {'f', 'j', 'm', 'q', 't', 'w', 'z'}; */


	/* Question 2 */
	/* Write an array declaration which stores prices */
	
	/*	float prices[] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
	
	int j;
		printf("	      Price\n");
		printf("---------------------\n");
	for (j = 0; j < 8; j++)
		printf("Item no. %d : $%4.2f\n", j+1, prices[j]);
	*/

	/* ---------------------------------------------------------------- */
	/* Question 3 */
	/* A program that uses array declration to intialize array name slope */
	/* Program should locate and display both max and min values */
	
	float slopes[9] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
	float max = slopes[0], min = slopes[0];
	int k;

	for (k = 0; k < 9; k++)
		{
		{
			if (max < slopes [k])
			max = slopes[k];
		}
		{
			if (min > slopes[k])
			min = slopes[k];
		}
		}

	printf("\n\nThe maximum value is %f and the minimum value is %f\n", max, min);
	
	/* Question 4 */
	/* Program stores prices in array names prices */
	/* Two arrays units and amounts also store double precision values */
	/* Accept 5 user inputs for units */
	/* Calculate and display amount */

	double prices[5] = {9.92, 6.32, 12.63, 5.95, 10.29}, units[5], amounts[5];

	int l; 
	for (l = 0; l < 5; l++)
		{
		printf("Item Price: $%4.2lf\nEnter Unit Quantity: ", prices[l]);
		scanf("%lf", &units[l]);
		}

	printf("Price\tUnits\tAmount\n");
	printf("-----\t-----\t------\n");
	
	for (l = 0; l < 5; l++)
		printf("%4.2lf\t%2.0lf\t%4.2lf\n", prices[l], units[l], (prices[l] * units[l]));
	
	/* Question 5 */
	char goodstr1[13] = {'G', 'o', 'o', 'd',' ', 'M', 'o', 'r', 'n', 'i', 'n', 'g'};
	char goodstr2[] =  {'G', 'o', 'o', 'd',' ', 'M', 'o', 'r', 'n', 'i', 'n', 'g'};
	char goodstr3[] = "Good Morning";


	/* Question 7 */
	/* Write declaratoin "This is a test" to array named strtest */
	/* Display the message through a loop */

	char strtest[] = "This is a test";
	int I;
	printf("\n\n");
	/* for (I = 0; I < 14; I++)
		{	printf("%c", strtest[I]);
	 	}
	printf("\n\n");
	
	printf("%s\n", strtest); */

	do
	{
	printf("%c", strtest[I++]);
	}
	while (strtest[I] != '\0');

}
	
