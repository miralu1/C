#include<stdio.h>
void main(void)
{
	char marcode;
	int i;
	
	for (i = 0; i < 100; i++)
	{
	__fpurge(stdin);
	printf("Please enter a code: ");
	scanf("%c", &marcode);

	if (marcode == 'M' || marcode == 'm')
		printf("The individual is Married.\n");
	else if (marcode == 'S' || marcode == 's')
		printf("The individual is Single.\n");
	else if (marcode == 'D' || marcode == 'd')
		printf("The individual is divorces.\n");
	else
		printf("An invalid entry entered.\n");
	printf("Thanks for participating.\n");
	}

	/* if (grade == 'A')
 * 		if (weight > 35)
 * 		bin = 1;
 *
 * 	
	*/
}
