#include<stdio.h>
#define ROWS 3
#define COLS 5
void main(void)
{
	/* Question 7 */
	/* 3 rows and 5 column array */
	/* Contains test grade for students */
	/* Array has 15 values */
	/* Program determines total no. of grades in range < 60 */
	/* range > 60 < 70 */
	/* range > 70 < 80 */
	/* range > 80 < 90 */
	/* range >= 90 */

	int grades [ROWS][COLS] = {68, 74, 82, 88, 93, 
				   74, 71, 62, 98, 81,
				   63, 53, 80, 94, 77 };

	/* Each row to check through each ranges */
	/* Function determines no. of values in that range */
	/* and adds it to a sum variable for the next set of rows */
	
	int i,j, sum60 = 0, sum670 = 0, sum780 = 0,
	sum890 = 0, sum90 = 0;

	for (i = 0; i < ROWS;i++)
	{		
		for (j = 0; j < COLS; j++)
		{
		if (grades[i][j] < 60)
		sum60++;
		else if (grades[i][j] >= 60 && grades[i][j] < 70)
		sum670++;
		else if (grades[i][j] >= 70 && grades[i][j] < 80)
		sum780++;
		else if (grades[i][j] >= 80 && grades[i][j] < 90)
		sum890++;
		else if (grades[i][j] > 90)
		sum90++;
		}
	}
	printf("  Ranges  \tGrade Count\n");
	printf("----------\t-----------\n");
	printf(" Below 60 \t   %2d\n", sum60);
	printf("  60-70   \t   %2d\n", sum670);
	printf("  70-80   \t   %2d\n", sum780);
	printf("  80-90   \t   %2d\n", sum890);
	printf(" Above 90 \t   %2d\n", sum90);
	printf("\n\n");


}
