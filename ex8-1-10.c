#include<stdio.h>
#define NUMEL 10
void main(void)
{
	/* Program that has 3 dimensions array: prices, quantity & amount */
	/* Each array is capable of holding 10 elements */
	/* Input 10 values for each element using for loop */
	/* Values in array amount should be the product of price * qty */
	
	float price[NUMEL], amount[NUMEL];
	int qty[NUMEL], i;
	
	for (i = 1; i <= NUMEL; i++)
	{
	printf("Enter price for item %d: ", i);
	scanf("%f", &price[i]);
	printf("Enter quantity for item %d: ", i);
	scanf("%d", &qty[i]);
	amount[i] = price[i] * qty[i];
	}

	i = 0;

	printf("Price\tQuantity\tAmount\n");
	printf("-----\t--------\t------\n");
	
	for (i = 1; i< NUMEL; i++)
	{
	printf("%6.2f\t%8.2d\t%6.2f\n", price[i], qty[i], amount[i]);
	}
}
