#include<stdio.h>

void main(void)
{

	/* Give users 3 choices to choose from */
	/* Use switch function to give option */
	/* Use each case as per required option */
	/* display results */
	/* If last switch is chosen */
	/* Quit program */

	float faren, cels;
	
	int option, counter = 1;

	while (counter <= 30)
	{				
	printf("*** Temperature Conversion Program ****\n\n");
	
	printf("Please choose from the following options:\n");
	printf("1. Celsius to Farenheit\n2. Farenheit to Celsius\n3. Quit!\n");
	printf("Enter your option: ");
	scanf("%d", &option);

	

	switch (option)
	{
		case 1:
		printf("Enter temperature in Celsius degrees: \n");
		scanf("%f", &cels);
		faren = ((9.0 / 5.0) * cels + 32.0);	
		printf("****************************************\n");
		printf("%2.0f Celsius is %2.0f Farenheit degrees\n", cels, faren);
		printf("****************************************\n");
		break;
		
		case 2:
		printf("Enter temperature in Farenheit degrees: \n");
		scanf("%f", &faren);
		cels = ((5.0 / 9.0) * (faren - 32.0));
		printf("****************************************\n");
		printf("%2.0f Farenheit is %2.0f Celsius degrees\n", faren, cels);
		printf("****************************************\n");
		break;

		case 3:
		break;

	}
	counter++;
	if (option == 3)
	break;
	}

}
