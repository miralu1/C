#include<stdio.h>
#define MAX_CELSIUS 60
#define STEP_SIZE 10
void main(void)
{
	printf("Chapter 5\tRepetition Structures\n");

	int count = 1;

	while (count <= 10)
	{
		printf("%d ", count);
		count = count + 1;

	}

	printf("\n\nNUMBER SQUARE CUBE\n");
	printf("-------- -------- -----\n");
	
	int num = 1;
	while (num < 11)
	{
		printf("%3d    %3d  %4d\n", num, num*num, num*num*num);
		num = num + 1;
	}

	int celsius, start_value = -10;
	float fahren;

	printf("\n\nDEGREES\tDEGREES\n");
	printf("CELSIUS\tFAHRENHEIT\n");	
	printf("-------\t----------\n");
	
	celsius = start_value;
	while (celsius <= MAX_CELSIUS)
	{
	fahren = (9.0 / 5.0) * celsius + 32.0;
	printf("%5d%12.2f\n", celsius, fahren);
	celsius = celsius + STEP_SIZE;
	}	

}
