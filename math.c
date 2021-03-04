#include<stdio.h>
#include<math.h>
void main(void)
{
	/* Review of the Mathematical library function */
	
	printf("The square root of 4 is: %f\n",sqrt(4));
	printf("The square root of 9 is: %f\n",sqrt(9));
	printf("The square root of 92 is: %f\n",sqrt(92));
	printf("The square root of 234 is: %f\n",sqrt(234));
	printf("The square root of 81 is: %f\n",sqrt(81));
	printf("The square root of 35 is: %f\n",sqrt(35));

	printf("The power 3 to the 5th is: %lf\n", pow(3.0,5.0));

	/* b = sin(x) - cos(x); */
	/* b = pow(sin(x), 2.0) - pow(cos(x), 2.0); */
	/* area = (c * b * sin(a)) / 2 */
	/* c = sqrt(pow(a, 2.0) + pow(b, 2.0)); */
	/* p = sqrt(abs(m - n)); */

	char temp_type;
	float temp, fahren, celsius;
	
	printf("Enter the temperature to be converted: ");
	scanf("%f", &temp);

	__fpurge(stdin);
	printf("Enter an F if the temperature is fahrentheit.\n");
	printf(" or a C if the temperature is celsius: ");
	scanf("%c", &temp_type);

	if (temp_type == 'f')
	{

	celsius = (5.0 / 9.0) *(temp - 32);
	printf("The equivalant Celsius temperature is %6.2f\n", celsius);

	}

	else
	{
	fahren = (9.0 / 5.0) * temp + 32.0;
	printf("The equivalant Fahrenheit temperature is %6.2f\n", fahren);
	}


	/* Questio 3 */
	
	/* Each disk has a cose 1-4 */
	/* Write a C program that accepts the code and displays */
	/* the correct disk drive type */

	int code;

	printf("Enter a Disk code: ");
	scanf("%d", &code);

	switch (code)
	{
	case 1:
	printf("Disk: 360-kilobyte drive (5.5inch)\n");
	break;
	case 2:
	printf("Disk: 1.2-megabyte drive (5.5inch)\n");
	break;
	case 3:
	printf("Disk: 722-kilobyte drive (3.25inch)\n");
	break;
	case 4:
	printf("Disk: 1.4-megabyte drive (3.25inch)\n");
	break;
	default:
	printf("*****Invalid code entered.******\n**Program terminated!**\n");
	break;
	}


	int count;
	
	count = 1;
	while (count <= 10)
	{
	printf("%d \n", count);
	count++;
	}
}
