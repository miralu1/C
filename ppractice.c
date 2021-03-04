#include<stdio.h>
void main(void)
{
	/* Returning multiple function values */
	/* Write a program which uses a function or 2 to change the */
	/* values of the variables being passed using pointers */
	/* Program to calculate cost of commute */
	/* User input one-way distance and no. of work days */
	/* User selects vehicle type code */
	/* If car is chosen, user enters gas prices per litre */
	/* Output of the cost of driving car based gas prices */
	/* Along with total number of kms travelled */
	/* If bycle is chosen, user enters avg speed and distance and no. */
	/* of times of the instance one-way */
	/* Output of time it takes to reach destination */


	float distance, gas_prices, mileage, cost, avg_speed;
	int work_days, v_code, count = 1;

	float car_cost(float, float, float, int, float *);
	float bike_cost(float, float, float *);

	while (count == 1) 
	{
	printf("Cost of Commute Comparison\n");
	printf("\nChoose vehicle type: 1. Car\t2. Bike\n");
	scanf("%d", &v_code);

	switch (v_code)
	{
	case 1:
	printf("Vehicle type --> CAR\n");
	printf("Enter the latest gas prices per litre and mileage: ");
	scanf("%f %f", &gas_prices, &mileage);
	printf("Enter no. of days driven to work and distance(KM): ");
	scanf("%d %f", &work_days, &distance);	


	car_cost(distance, gas_prices, mileage, work_days, &cost);
	break;
	case 2:
	printf("Vehicle type --> BIKE\n");
	printf("Enter average speed (KPH) and distance (KM): ");
	scanf("%f %f", &avg_speed, &distance);
	printf("Enter no. of days of commute: ");
	scanf("%d", &work_days);

	bike_cost(distance, avg_speed,&cost);
	break;
	default:
	printf("\n****Invalid option. Choose 1 for Car or 2 for Bike****\n");
	break;
	}
	

	printf("\n\nThe cost of commute: $%f\n", cost);
	printf("Distance travelled one-way: %f\n", distance);
	printf("  for %d no. of days.\n", work_days);
	}
}

float car_cost(float dist, float g_prices, float mileage, int w_days, float *carcost)
{

	*carcost = ((g_prices / mileage) * dist) * (w_days * 2);
	return(*carcost);
}

float bike_cost(float dist, float avg_sp,float *bikecost)
{

	*bikecost = dist / (avg_sp / 60);
	return(*bikecost);
}



