#include<stdio.h>
void main (void)
{
	/* Question 4 */
	/* Program which contains 3 single dimension array miles, gallons, mpg */
	/* Each array must hold 10 elements */
	/* Calculate mpg through the coresponding values of miles and gallons */
	

	float miles[] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
	float gallons[] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4}, mpg[10];

	int i;

	for (i = 0; i < 10; i++)
	{
	mpg[i] = miles[i] / gallons[i];
	printf("%4.2f %3.1f = %5.2f\n", *(miles + i), *(gallons + i), 
	*(mpg + i));
	}

	/* Question 6 */
	/* Program which contains 2 arrays price, quantity, amount */
	/* Pass array to a function called extend */
	/* extend calculates product of price and quantity 8*/
	/* Display values in array */

	double price[] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 
			  6.58, 18.32, 12.15, 3.98};
	double quantity[] = {4, 8.5, 6, 7.35, 9, 15.3, 2, 5.4, 2.9, 4.8}, 
	amount[10];

	double *p_ptr, *q_ptr, *a_ptr;

	p_ptr = &price[0];
	q_ptr = &quantity[0];
	a_ptr = &amount[0];

	void extend(double [], double [], double []);
	
	extend(p_ptr, q_ptr, a_ptr);

	for (i = 0; i < 10; i++)
	{
	printf("%lf x %lf = %lf\n", *(p_ptr+i), *(q_ptr+i), *(a_ptr+i));
	}	
}


void extend (double pr[], double qty[], double amt[])
{
	
	int j;
	for (j = 0; j < 10; j++)
	*amt++ = *pr++ * *qty++;
	
}



	



