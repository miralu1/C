#include<stdio.h>

void main(void)
{

	/* Modularity using functions */

	int find_max(int, int);
	int firstnum, secnum;
	
	printf("\nEnter a number: ");
	scanf("%d",&firstnum);
	printf("\nEnter a second number: ");
	scanf("%d", &secnum);

	printf("Maximum of the two are %d\n", find_max(firstnum, secnum));

}

int find_max (int x, int y)
{

	int maxnum;
	
	if (x <= y)
		maxnum = y;

	else
		maxnum = x;
	
	return(maxnum);
}
