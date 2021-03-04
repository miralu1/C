#include<stdio.h>
void main(void)
{
	/* Chapter 4 Review */
	
	float taxable, taxes;
	
	printf("Please type in the taxable income: ");
	scanf("%f", &taxable);
	
	if (taxable <= 20000.0)
		taxes = 0.02 * taxable;

	else 
		taxes = 0.025 * (taxable - 20000.0) + 400;

	printf(" Taxes are $%7.2f\n", taxes);

	/* if (angle == 90)
 * 		printf("The angle is a right angle\n");
 * 	else
 * 		printf("The anle is not a right angle\n"); */

	/* b. if (ace < 25)
 * 		sum = sum + a;
 *
 * 		else
 * 		count = count + 1; */
	/* if (c == 15)
 * 		{
 * 		volts = 5;
 * 		pwr = 10;
 * 		}
 * 	else
 * 		{
 * 		volts = 16;
 * 		pwr = 25;
 * 		} */

	/* Question 4 */

	int credits;
	
	printf("Please enter student credits: ");
	scanf("%d", &credits);
	
	if (credits < 32)
		printf("Grade Level: Freshman\n");
	else if ((credits >= 32) && (credits <= 63))
		printf("Grade level: Sophmore\n");
	else if ((credits >= 64) && (credits <= 95))
		printf("Grade level: Junior\n");
	else
		printf("Grade level: Senior\n");

	printf("\n\nSwitch Statement\n");
	/* int res_type;
	switch (res_type)
	{
	case 1:
	in_data();
	check();
	break;
	case 2:
	capacity();
	devtype();
	break;
	case 3:
	volume();
	mass();
	break;
	case 4:
	area();
	weight();
	break;
	case 5:
	files();
	save();
	break;
	}*/
	/* Question 3*/

	int code;
	printf("Enter a code based on the type of drive\n");
	printf("		1 for 360KB Drive\n");
	printf("		2 for 1.2MB Drive\n");
	printf("		3 for 722KB Drive\n");
	printf("		4 for 1.4MB Drive\n");
	printf("Enter Code: ");
	scanf("%d", &code);

	switch (code)
	{
	case 1:
	printf("Drive type: 360KB (5.5inch) Drive\n");
	break;
	case 2:
	printf("Drive type: 1.2MB (5.5inch) Drive\n");
	break;
	case 3:
	printf("Drive type: 722KB (3.25inch) Drive\n");
	break;
	case 4:
	printf("Drive type: 1.4MB (3.25inch) Drive\n");
	break;
	}
}
