#include<stdio.h>
void main(void)
{
	int model, weight;
	printf("Enter the year and weight of vehical: ");
	scanf("%d %d", &model, &weight);

	if (model <= 1970)
	{
		if (weight < 2700)
		printf("Weight class: 1\t Registration fee: $16.50\n");
		else if (weight >= 2700 && weight <= 3800)
		printf("Weight class: 2\t Registration fee: $25.50\n");
		else if (weight > 3800)
		printf("Weight class: 3\t Registration fee: $46.50\n");
	}
	else if (model >= 1971 && model <= 1979)
	{
		if (weight < 2700)
		printf("Weight class: 4\t Registration fee: $27.00\n");
		else if (weight >= 2700 && weight <= 3800)
		printf("Weight class: 5\t Registration fee: $30.50\n");
		else if (weight > 3800)
		printf("Weight class: 6\t Registration fee: $52.50\n");
	}
	else if (model >= 1980)
	{
		if (weight < 3500)
		printf("Weight class: 7\t Registration fee: $19.50\n");
		else if (weight >= 3500)
		printf("Weight class: 8\t Registration fee: $52.50\n");
	}

}
