#include<stdio.h>
#define NUM 5

void main(void)
{
	int *g_ptr;
	int i, grades[] = {98, 87, 92, 79, 85};
	
	g_ptr = &grades[0];
	
	for (i = 0; i < NUM; i++)
	printf("Element %d is %d\n", i, *(g_ptr + i));

	float rates[] = {12.9, 18.6, 11.4, 13.7, 9.5, 15.2, 17.6};

	float *d_rates = &rates[0];

	int j;

	printf("\n\n");
	for (j = 0; j < 7; j++)
	printf("%4.2f\n", *(d_rates + j));

	printf("\n\n");
	

}
