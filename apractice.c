#include<stdio.h>
void main(void)
{
	/* Program accepts floating point grades in array name Grades */
	/* Grades are to be counted and an entry is terminated if negative value is entered */
	/* Display the sum and average of all the grades */
	/* Program should display an * before any grade that is below average */

	float Grades[0];
	int i = 0, count = 1;

	while (i < count)
	{
	printf("Enter a Grade: ");
	scanf("%f", &Grades[i]);
	
	if (Grades[i] < 0)
		{
		Grades[i] = NULL;
		break;
		}
	else
		{
		count++;
		i++;
		}
	}

	
	float sum(float [], int);
	float avg(float, int);
	float d_avg(float [], int);

	printf("Sum of all grades: %f\n", sum(Grades, count));
	printf("Average of all grades: %f\n", avg(sum(Grades, count), count));

}

float sum(float grades[], int cnt)
{
	float sum;
	int i;
	for (i = 0; i < cnt; i++)
	{
	sum = sum + grades[i];
	}
	return(sum);
}

float avg(float gradesum, int cnt)
{
	float avg = gradesum / cnt;
	return(avg);
}

	
