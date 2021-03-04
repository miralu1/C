#include<stdio.h>
void main(void)
{
	/* Program which stores values in an array named rates */
	/* Display the valuesby changing address in a pointer disp_pt. */

	float rates[] = {6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 
			8.2, 8.4, 8.6, 8.8, 9.0};
	float *disp_pt = &rates[0];

	int i;
	
	for (i = 0; i < 13; i++)
	printf("%3.2f\n", *(disp_pt + i));

	printf("\n\n");
	
	int miles[] = {15, 22, 16, 18, 27, 23, 20}, dist[7];
	int *m_pt =miles, j; /* &miles[0] == miles; */
	
	for (j = 0; j < 7; j++)
	{
	dist[j] = *m_pt++;
	printf("The value in distance %d is %d\n", j+1, dist[j]);
	}
	
}
