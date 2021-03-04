#include<stdio.h>
#define MAXELS 5
void main(void)
{
	/*int nums[MAXELS] = {2, 18, 1, 27, 16};
	int find_max(int [MAXELS]);

	printf("The maximum value is %d\n", find_max(nums));
}

int find_max(int vals[MAXELS])
{
	int i, max = vals[0];
	
	for (i = 1; i < MAXELS; i++)
		if (max < vals[i])
			max = vals[i];
	return(max);*/

	/* Excercise 8.3 */
	/* Question 1 */
	/* void sort_arr(double in_array[]); */
	/* Question 2 */
	/* void find_key(char select[256]) */
	/* or */
	/* void find_key(char select[]) */
	/* Question 3 */
	/* float prime(float rates[256]) */
	/* or */
	/* float prime(float rates[]) */

	/* Question 5 */
	/* Program man() to have array rates */
	/* A function show() to accept rates as arguments nramed rates and display numbers of array */

	float rates[] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
	void show(float []);
	
	show(rates);
	printf("\n\n");
	
	/* Question 6 */
	/* Program man() to store sting "Vacation is near" into array message */
	/* Function named display() to accept message array and display the string */
	
	char message[] = "Vacation is near";
	void display(char []);

	display(message);

	printf("\n");

}
void display(char strng[])
{
	int j;
	for (j = 0; j < 8; j++)
	printf("%c", strng[j]);
}
void show(float rates[])
{
	int i;
	for (i = 0; i < 9; i++)
	printf("No.%d: %f\n", i+1, rates[i]);
}
