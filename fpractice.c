#include<stdio.h>
void main(void)
{
	
	/* Create a program which utilizes atleast 2 or more functions */
	/* A Program which converts bytes to their prefixes */
	/* User inputs a value representing byte count */
	/* If value is above 1000 it is a bytebytes */
	/* If value is above 1000,000, it is a megabytes */
	/* If value is above 1000,000,000, it is a gigabyte */
	/* If value is above 1000,000,000,000, it is a terabyte */
	/* If value is above 1000,000,000,000,000, it is a petabyte */
	/* Each prefix conversion to have it's own function */
	/* Return value after function is called */


	printf("-----------------------------\n");
	printf("   Byte Conversion Program\n");
	printf("-----------------------------\n");
	printf("\n\n");
	float  bytes, count = 1;
	float KB(float);
	float MB(float);
	float GB(float);
	float TB(float);
	float PB(float);

	while (count = 1)
	{
	printf("Enter byte value: ");
	scanf("%f", &bytes);

	if (bytes >= 1000 && bytes < 1e6)
		printf("%6.2f Kilobytes in %2.2f bytes\n", KB(bytes), bytes);
	else if (bytes < 1000)
		printf("%6.2f bytes\n", bytes);
	else if (bytes >= 1e6 && bytes < 1e9)
		printf("%7.2f Megabytes in %2.2f bytes\n", MB(bytes), bytes);
	else if (bytes >= 1e9 && bytes < 1e12)
		printf("%10.2f Gigabytes in %2.2f bytes\n", GB(bytes), bytes);
	else if (bytes >= 1e12 && bytes < 1e15)
		printf("%13.2f Terabytes in %2.2f bytes\n", TB(bytes), bytes);
	else
		{
		printf("Bytes are beyond standard storage limit\n");
		printf("  Please try again!\n");
		}
	}

	/* Define local variable storage classes: */
	/* Auto = automatic storage class assigned */
	/* Static = local variable value is stored and passed on after exe */
	/* Register = variable values are stored in cpu register for fast */
	
	/* Defing Global Variable Storage Classes: */
	/* Extern = variables and their values can be used from external file */
	/* Static = variables and their values are prohibited for external */
	/* ..use and stay within the program */
}

float KB(float byte)
{

	float kb = byte / 1e3;
	return (kb);
}

float MB(float byte)
{
	float mb = byte / 1e6;
	return (mb);
}

float GB(float byte)
{
	float gb = byte / 1e9;
	return (gb);
}

float TB(float byte)
{
	float tb = byte / 1e12;
	return (tb);
}
