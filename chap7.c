#include<stdio.h>
int firstnum;
void main(void)
{
	int secum;
	void valnum(void);

	firstnum = 10;
	secum = 20;

	printf("From main: firstnum = %d\n", firstnum);
	printf("From main: secnum = %d\n",secum);
	
	valnum();

	printf("\nFrom main again: firstnum %d\n", firstnum);
	printf("From main again: secnum = %d\n", secum);

	float firstnum, secnum;
	void newval(float *, float *);
	
	printf("\nEnter two numbers: ");
	scanf("%f %f", &firstnum, &secnum);

	newval(&firstnum, &secnum);

}

void newval(float *xnum_addr, float *ynum_addr)
{
	printf("\nThe value whose address is in num1_addr is %f\n", *xnum_addr);
	printf("The value whose address is in num2_addr is %f\n", *ynum_addr);
	return;
}

void valnum(void)
{
	int secum;
	secum = 30;
	
	printf("\nFrom valnum: firstnum = %d\n", firstnum);
	printf("From valnum: secum = %d\n", secum);

	firstnum = 40;
	return;

	/* question 1 */
	/* List of Storage classes:*/
	/* Local Variable >> a) Auto, b) Static, c) Register */
	/* Global Variable >> a) Exter, b) Static */
	
	/* Question 2 */
	/* difference between local auto variable and local static variable*/
	/* Auto declaration assigns storage space to the variable within the scope of the function */
	/* Static declaration assigns storage space to the variable and retains the value and is only initialized once */
	
	/* Question 4 */
	/* Difference between Static Global Variable and Extern Global Variable */
	/* Static global variable retains and preserves value within one file and cannot be linked to another file */
	/* Extern global variable gives the ability to declare existing variables in a second file */
	/* This conserves storage space and prevents redundancy */
	
	/* Question 5 */
	/* static double years; this can be used in either of the local and global variables */
	/* The scope of the variable is determined where the placement is. If it is places within a function than*/
	/* it is a local static variable which retains its value and does not need to be re-initialized */
	/* If the function is placed outside of a function and in a global environment than it is a variable where */
	/* The value cannot be passed to external files */

	/* Question 6 */
	
}

