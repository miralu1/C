#include<stdio.h>
void main (void)
{
	/* Question 13 */
	/* Create a program which converts units on demand */
	
	/* Provide users with option to select unit of measure */
	/* User selects option and switch code is activated */
	/* Return the function according to the unit selected */

	float American_unit;
	float inch_c(float);
	float foot_c(float);
	float yard_c(float);
	float mile_c(float);
	float fahren_c(float);
	float pound_c(float);
	float ounce_c(float);
	float dollar_c(float);
	float quart_c(float);
	float teaspoon_c(float);
	float degree_c(float);
	float degree_d(float);
	

	printf("********** Comprehensive Conversion Program *************\n");
	printf("---------------------------------------------------------\n\n");
	printf("Distance:    1. Inches\t\t>>\t Centimeter.\n");
	printf("             2. Foot\t\t>>\t Meter.\n");
	printf("             3. Yard\t\t>>\t Meter.\n");
	printf("             4. Miles\t\t>>\t Kilometer.\n");
	printf("Temperature: 5. Fahrenheit\t>>\t Celsius\n");
	printf("Weight:      6. Pound\t\t>>\t Kilogram.\n");
	printf("             7. Ounce\t\t>>\t Gram.\n");
	printf("Currency:    8. Dollar\t\t>>\t Franc.\n");
	printf("Capacity:    9. Quart\t\t>>\t Liter\n");
	printf("             10. Teaspoon\t>>\t Milliliter.\n");
	printf("Math:        11. Degree\t\t>>\t Radian.\n");
	printf("             12. Degree\t\t>>\t Grad.\n");
	printf("---------------------------------------------------------\n\n");

	int count = 1;
	int code;
	while (count < 1000)
	{

	printf("Enter option: ");
	scanf("%d", &code);
	printf("Enter value: ");
	scanf("%f", &American_unit);

	switch (code)
	{
	case 1:
	{
	printf("%finches >> %f Centimeter.\n", American_unit, inch_c(American_unit));
	break;
	}
	case 2:
	{
	printf("%f foot >> %f Meter.\n", American_unit, foot_c(American_unit));
	break;
	}
	case 3:
	{
	printf("%f yards >> %f meters.\n", American_unit, yard_c(American_unit));
	break;
	}
	case 4:
	{
	printf("%f miles >> %f kilometers.\n", American_unit, mile_c(American_unit));
	break;
	}
	case 5:
	{
	printf("%f fahrenheit >> %f celsius.\n", American_unit, fahren_c(American_unit));
	break;
	}
	case 6:
	{
	printf("%f pounds >> %f kilograms.\n", American_unit, pound_c(American_unit));
	break;
	}
	case 7:
	{
	printf("%f ounces >> %f grams.\n", American_unit, ounce_c(American_unit));
	break;
	}
	case 8:
	{
	printf("%f dollars >> %f Francs.\n", American_unit, dollar_c(American_unit));
	break;
	}
	case 9:
	{
	printf("%f quarts >> %f liters.\n", American_unit, quart_c(American_unit));
	break;
	}
	case 10:
	{
	printf("%f teaspoon >> %f milliliter.\n", American_unit, teaspoon_c(American_unit));
	break;
	}
	case 11:
	{
	printf("%f degree >> %f Radians.\n", American_unit, degree_c(American_unit));
	break;
	}
	case 12:
	{
	printf("%f degree >> %f Grads.\n", American_unit, degree_d(American_unit));
	break;
	}
	}
	count++;
	}
}	

float inch_c(float a)
{
	float centimeter = 2.54 * a;
	return (centimeter);
}

float foot_c(float b)
{
	float meter = 0.305 * b;
	return(meter);
}

float yard_c(float c)
{
	float meter_1 = 0.1944 * c;
	return(meter_1);
}

float mile_c(float d)
{
	float kilometer = 1.6909 * d;
	return(kilometer);
}

float fahren_c(float e)
{
	float celsius = (5.0 / 9.0) * (e - 32.0);
	return(celsius);
}

float pound_c(float f)
{
	float kilogram = 0.454 * f;
	return(kilogram);
}

float ounce_c(float g)
{
	float gram = 28.35 * g;
	return(gram);
}

float dollar_c(float i)
{
	float franc = 5 * i;
	return(franc);
}

float quart_c(float j)
{
	float liter = 0.946 * j;
	return(liter);
}

float teaspoon_c(float k)
{
	float milliliter = 4.9 * k;
	return(milliliter);
}

float degree_c(float l)
{
	float radian = (3.14 / 180) * l;
	return(radian);
}

float degree_d(float m)
{
	float grad = (200/180) * m;
	return(grad);
}
	  

