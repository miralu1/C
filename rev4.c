#include<stdio.h>
void main(void)
{
/*	double usenum;
	
	printf("This program calculates the square root and \n");
	printf("reciprocal (1/number) of a number \n");
	printf("\nPlease enter a number: ");
	scanf("%1f", &usenum);
	
	if (usenum < 0.0)
	printf("The square root of a negative number does not exist.\n");
	else 
	printf("The square root of %1f is %1f\n", usenum, sqrt(usenum));
	if (usenum == 0)
	printf("The reciprocal of zero does not exist.\n");
	else
	printf("The reciprocal of %1f is %1f\n", usenum, 1/usenum);

	 Excercise 1 */

	/* Accept input of 2 real number and a select code */
	/* if 1 selected, add the 2 numbers */
	/* if 2 selected, multply the 2 numbers */
	/* if 3 selected, divide the 1st number by the 2nd */
	/* If 0 is selected as a number, display message that division is not allowed
	
	float num1, num2;
	int opcode;
	printf("Enter 2 numbers: ");
	scanf("%f %f", &num1, &num2);
	__fpurge(stdin);
	printf("Select OP Code 1, 2 or 3: ");
	scanf("%d", &opcode);

	if (opcode == 1)
	printf("The sum is: %f\n", num1 + num2);
	else if (opcode == 2)
	printf("The product is: %f\n", num1 * num2);
	else if (opcode == 3)
	{
	if (num1 == 0 || num2 == 0)
	printf("The number cannot be divided by 0\n");
	else
	printf("The numbers divided: %f\n", num1 / num2);
	}

	int month, day;
	
	printf("Enter a month (use a 1 for Jan, etc.): ");
	scanf("%d", &month);
	__fpurge(stdin);
	printf("Enter a day of the month: ");
	scanf("%d", &day);

	if (month >= 1 && month <= 12);
	else 
	printf("User entered an invalid data\n");
	
	if (day >= 1 && day <= 31);
	else
	printf("User entered an invalid data \n");
	
	int angle, quadrant;

	printf("Enter the angle: ");
	scanf("%d", &angle);
	__fpurge(stdin);
	
	if (angle >= 0 && angle < 90)
	{quadrant = 1;
	printf("The angle is in quadrant %d\n", quadrant);
	}

	else if (angle > 90 && angle < 180)
/	{quadrant = 2;
	printf("The angle is in quadrant %d\n", quadrant);
	}
	
	else if (angle > 180 && angle < 270)
	{quadrant = 3;
	printf("The angle is in quadrant %d\n", quadrant);
	}
	
	else if (angle > 270 && angle < 360)
	{quadrant = 4;
	printf("The angle is in quadrant %d\n", quadrant);
	}
	else if (angle == 90 || angle == 180 || angle == 180 || angle == 270 || angle == 360)
	printf("The angle is on the axis\n");
	*/

	/* 1 */
	
  	int temp1, temp2, total;
  	printf("Enter two temperature: ");
	scanf("%d %d", &temp1, &temp2);

	if (temp1 == temp2)
	printf("%d\n", temp1);

	/*c
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 < num2 && num2 < num3)
	printf("%d %d %d", num3, num2, num1);

	else if (num1 > num2 && num2 > num3)
	printf("%d %d %d", num1, num2, num3);

	else if (num2 < num1 && num1 < num3)
	printf("%d %d %d", num3, num1, num2);

	else if (num2 > num1 & num1 > num3)
	printf("%d %d %d", num2, num1, num3);

	else if (num3 < num1 & num1 < num2)
	printf("%d %d %d", num2, num1, num3);

	else if (num3 <*/
	
	/*3a*/
	__fpurge(stdin);
	char input;

	printf("Enter input letter: ");
	scanf("%c", &input);

	if (input == 'u')
	printf("I FEEL GREAT TODAY!\n");

	else
	printf("I FELL DOWN TODAY !@$#@!\n");

	h

} 


