#include<stdio.h>
void main(void)
{
	/* Question 9 */
	/* Write a subprogram function that accepts year and weight of an automobile and returns registration fee */
	
	int year, weight, count = 1;
	float reg_fee(int, int);

	while (count <= 10)
	{
	printf("Enter the Year and Weight of the car: ");
	scanf("%d %d", &year, &weight);
	
	printf("The registration fee for your car is: $%4.2f\n", reg_fee(year, weight));
	
	count++;
	}

}

float reg_fee(int x, int y)
{
	float fee;

	if (x <= 1970 && y < 2700)
	fee = 16.50;
	else if (x <= 1970 && (y >= 2700 && y <= 3800))
	fee = 25.50;
	else if (x <= 1970 && y > 3800)
	fee = 46.50;
	else if ((x >= 1971 && x <= 1979) && (y < 2700))
	fee = 27.00;
	else if ((x >= 1971 && x <= 1979) && (y >= 2700 && y <= 3800))
	fee = 30.50;
	else if ((x >= 1971 && x <= 1979) && y > 3800)
	fee = 52.50;
	else if (x > 1980 && y < 3500)
	fee = 19.50;
	else if (x > 1980 && y >= 3500)
	fee = 52.50;

	return(fee);
} 


	
			
