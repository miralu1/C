#include<stdio.h>
void main(void)
{
	/* Write Array Declarations for the following: */
	/* 1. float grade[100]; */
	/* 2. float temp[50]; */
	/* 3. char code[30]; */
	/* 4. int year[100]; */
	/* 5. float velocity[32]; */
	/* 6. float distance[1000]; */
	/* 7. int code[6]; */

	/* Question 2 */
	/* Write Appropriate notations for first, third and sevenths elements: */
	/* a. grade[0], grade[2], grade[6] */
	/* b. grade[0], grades[2], grades[6] */
	/* c.  amps[0], amps[2], amps[6] */
	/* d. dist[0], dist[2], dist[6] */

	/* Question 3 */

	/*int grades[20], dist[15];
	float grade[10], amps[16], velocity[25], time[100];

	printf("Enter Values into the first, third and seventh element: ");
	printf("\ngrade = ");
	scanf("%d %d %d", &grades[0], &grades[2], &grades[6]);
	printf("%d %d %d\n", grades[0], grades[2], grades[6]);
	printf("dist = "); 
	scanf("%d %d %d\n", &dist[0], &dist[2], &dist[6]);
	printf("%d %d %d", dist[0], dist[2], dist[6]);
	printf("grade = ");
	scanf("%f %f %f", &grade[0], &grade[2], &grade[6]);
	printf("amps = ");
	scanf("%f %f %f", &amps[0], &amps[0], &amps[6]);
	printf("velocity = ");
	scanf("%f %f %f", &velocity[0], &velocity[2], &velocity[6]);
	printf("time = ");
	scanf("%f %f %f", &time[0], &time[2], &time[6]);

	int i;
	for (i = 1; i <= 20; i++)
	{
	printf("Enter complete values for grade 1-20: ");
	scanf("%d", &grades[i]);
	}
	printf("%d\n", grades[i]);
	
	int i;
	float prices[8];
	for (i = 0; i <= 8;i++)
	{
	printf("Enter price for item %d: ", i);
	scanf("%f", &prices[i]);
	}
	printf("%f\t%f\t%f\n", prices[0], prices[1], prices[2]);
	printf("%f\t%f\t%f\n", prices[3], prices[4], prices[5]);
	printf("%f\t%f\t%f\n", prices[6], prices[7], prices[8]);
	
	Question 7 */
	/* Program accepting 8 ints into array temp */
	/* As each array is entered, add it to the total */
	/* display all input and their average 

	int i, total = 0, temp[8];
	float avg;

	for (i = 0; i < 8; i++)
	{
	printf("Enter temp %d:  ", i + 1);
	scanf("%d", &temp[i]);
	total = total + temp[i];
	}
	printf("%d\n", total);
	avg = total / 8.0;
	printf("%d %d %d %d %d %d %d %d\n", temp[0], temp[1], temp[2], temp[3], temp[4], temp[5], temp[6], temp[7]); 
	printf("Average = %f\n", avg); */

	/* Question 8 */
	/* Accept 10 inputs as ints in array name fmax */
	/* Determine the max value */
	
	int count, fmax[10], maxv, tracker;
	
	printf("Enter the first value: ");
	scanf("%d", &fmax[0]);
	
	maxv = fmax[0];
	tracker = 0;
	
	for (count = 1; count < 10;count++)
	{
	printf("Enter no. %d value: ", count +1);
	scanf("%d", &fmax[count]);
	if (maxv < fmax[count])
		{
		maxv = fmax[count];
		tracker = count + 1;
		}
	} 
	
	
	printf("The maximum value is: %d\n", maxv);
	printf("This is element number #%d in the list of numbers.\n", tracker);
}
