#include<stdio.h>

void main(void)
{

	int nums[14], i, total;

	for (i = 0; i < 14; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &nums[i]);
		total += nums[i];
	}

	float avg = (int) total / i;

	printf("\n the total is %d\n", total);
	printf("the average is %2.2f\n", avg);

}
