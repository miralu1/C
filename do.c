#include<stdio.h>
void main(void)
{
	/* Question 1 */
	/* Accept a Grade */
	/* Request Grade continously until an invalid grade is entered */
	/* Invalid Grade is anything grade less than 0 or greater than 100 */
	/* Display the value of valid grade */

	int count = 0, grade;

	do
	{
	printf("Enter a Grade: ");
	scanf("%d", &grade);
	printf("%d\n", grade);
	if (grade == 999)
	break;
	else if (grade <= 0 || grade > 100)
	{printf("An invalid grade has been entered\n");
	count++;
	}
	if (count == 5)
	{
	printf("Limit of 5 invalid entries have been made\n");
	break;
	}
	}
	while (grade > 0 || grade < 100);
	
}
	
	
