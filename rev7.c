#include<stdio.h>
#define MAXGRADES 5
void main(void)
{

	int i, grades[MAXGRADES];
	for (i = 0; i < MAXGRADES; i++)
	{
		printf("Enter a grade: ");
		scanf("%d", &grades[i]);
	}

	printf("\n");
	for (i = 0; i < MAXGRADES; i++)
		printf("Grades %d is %d\n", i, grades[i]);
}
