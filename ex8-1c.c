#include<stdio.h>
void main(void)
{
	/* Question 9 */
	/* Program to accept input of int into an array named grades */
	/* Add each number to the total */
	/* Calculate the average and use the calculation to determine deviation */
	/* Store each deviation in an array called deviation */
	/* Display each deviation alongside its corresponding elements from the grades array */

	/* int sum,i, j, k, grades[14];
	float avg, dev, var,deviation[14];

	for (i = 0; i < 14; i++)
	{
	printf("Enter grade %d: ", i + 1);
	scanf("%d", &grades[i]);
	sum += grades[i];

	}
	avg = sum / 14.0;
	printf("\nThe average of grades is %f\n\n", avg);
	
	for (j = 0; j < 14; j++)
	{
	dev = grades[j] - avg;
	deviation[j] = dev;
	}
	printf("Element no.\t Value\t Deviation\n");
	printf("-----------------------------------------\n");
	for (k = 0; k < 14; k++)
	{
	printf("%6d\t\t%d\t\t%f\n", k + 1, grades[k], deviation[k]);
	}
	*/

	/* Question 10 */
	/* Program has 3 arrays each holding 10 elements */
	/* prices, quantity and the product of those amount */
	/* Display the output in a table corresponding to each element */

	float amount[10], price[10], qty[10];
	int i;

	for (i = 0; i < 10; i++)
	{
	printf("Enter Price of item %d: ", i+1);
	scanf("%f", &price[i]);
	printf("Enter quantity: ");
	scanf("%f", &qty[i]);
	}

	printf("Price\tQty\tAmount\n");
	printf("-----\t---\t------\n");
	for (i = 0; i < 10; i++)
	{
	amount[i] = price[i] * qty[i];
	printf("%4.2f\t%2.0f\t%4.2f\n", price[i], qty[i], amount[i]);
	}





}
	
	
