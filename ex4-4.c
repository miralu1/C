#include<stdio.h>
void main(void)
{
/*	int opselect;
	double fnum, snum;
	
	printf("Please type in two numbers: ");
	scanf("%1f %1f", &fnum, &snum);
	
	__fpurge(stdin);

	printf("Enter a select code: \n");
	printf("	1. for addition\n");
	printf("	2. for multiplication\n");
	printf("	3. for division: ");

	scanf("%d", &opselect);
	switch (opselect)
	{
	case 1:
		printf("The sum of the numbers entered is %6.3f\n", fnum+snum);
		break;
	case 2:
		printf("The product of the numbers entered is %6.3f\n", fnum*snum);
		break;
	case 3:
		printf("The first number divided by the second is %6.3f\n", fnum/snum);
		break;
	} */

	/* Exercise 1 */
	/* switch (let_grad)
 * 	{
 * 	case 'A':
 * 		printf("The numerical grade is between 90 and 100\n");
 * 		break;
 * 	case 'B':
 * 		printf("The numberical grade is between 80 and 90\n");
 * 		break;
 * 	case 'C':
 * 		printf("The numerical grade is between 70 and 79.9\n");
 * 		break;
 * 	case 'D':
 * 		printf("How are you going to explain this one\n");
 * 		break;
 * 	default:
 * 		printf("Of course i had nothing to with my grade.\n");
 * 		printf("It must have been the professor's fault.\n");
 * 	} */

	/* Exercise 2 */

	/* switch (res_typ)
 * 	{
 * 		case 1:
 * 			in_data();
 * 			check();
 * 			break;
 * 		case 2:
 * 			capacity();
 * 			devtype();
 * 			break;
 * 		case 3:
 * 			volume();
 * 			mass();
 * 			break;
 * 		case 4:
 * 			area();
 * 			weight();
 * 			break;
 * 		case 5:
 * 			files();
 * 			save();
 * 			break;
 * 		case 6:
 * 			retrieve();
 * 			screen();
 * 			break;
 * 	}
 * 	*/

	/* Exercise 3 */
	int code;

	printf("Enter the Product code: ");
	scanf("%d", &code);

	switch (code)
	{
		case 1:
		printf("Disk Drive Type: 360-kilobyte drive (5 1/2 inches)\n");
		break;
		
		case 2:
		printf("Disk Drive Type: 1.2-megabyte drive (5 1/2 inches)\n");
		break;

		case 3:
		printf("Disk Drive Type: 722-kilobyte drive (3 1/4 inches)\n");
		break;

		case 4:
		printf("Disk Drive Type: 1.4-megabyte drive (3 1/4 inches)\n");
		break;
	
		default:
		printf("You have entered an invalid code. Please choose from 1-4 options.\n");
	}


}
