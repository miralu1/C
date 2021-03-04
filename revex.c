#include<stdio.h>
void main(void)
{
	/* Senior programmer paid $1000 a week */
	/* Junior programmer paid $600 a week */
	/* Accept input that displays senior programmer's salary */
	/* Else junior person's salary is output 

	char status;
	int sen_proger = 1000, jun_proger = 600;

	printf("Enter the status: ");
	scanf("%c", &status);
	
	if (!(status == 'S'))
	printf("Junior Programmer Salary :$%5.2d\n", jun_proger);
	
	else
	printf("Senior Programmer Salary: $%6.2d\n", sen_proger);

	__fpurge(stdin);

	char upp_case;
	printf("Enter a letter: ");
	scanf("%c", &upp_case);
	
	if (upp_case >= 'A' && upp_case <= 'Z')
	printf("The character entered is an uppercase.\n");
	
	else
	printf("The characer entered is not an uppercase.\n");
	
	__fpurge(stdin);
	ISE 7
	
	char letter;
	printf("Enter a letter: ");
	scanf("%c", &letter);
	
	if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z')
	printf("Hello there!\n");


	__fpurge(stdin);
	
	Accept user input as integer 
	Program determines whether input is odd or even.
	Displays the entered number and its attribute
	
	int oenum;
	printf("\nEnter a number: ");
	scanf("%d", &oenum);
	
	oenum = oenum % 2;
	
	if (oenum >= 1)
	printf("The number is odd.\n");
	
	else
	printf("the number is even.\n");

	__fpurge(stdin);
	
	EXCERCISE 9 
	Calculate and display our GPA */
	/* Prompt user for 2 inputsof Grade and credit hours for each course */
	/* Display output in an ascending order */
	/* calculate and display Gradepoint average. */
	/* A warning message should be displayed if GPA is less then 2.0. */
	/* A congratulary message displaed if GPA is 3.5 or more. */
	
	char grade1, grade2;
	float credit_hours1, credit_hours2;


	printf("Enter Letter Grade & Credit Hours for 1st course: ");
	scanf("%c %f", &grade1, &credit_hours1);
	__fpurge(stdin);
	printf("Enter letter Grade & Credit Hours for 2nd course: ");
	scanf("%c %f", &grade2, &credit_hours2);

	if (grade1 > grade2)
	{
	printf("Course 1 Grade: %c\t%3.2f\n", grade1, credit_hours1);
	printf("Course 2 Grade: %c\t%3.2f\n", grade2, credit_hours2);
	}
	else if (grade2 > grade1)
	{
	printf("Course 2 Grade: %c\t%3.2f\n", grade2, credit_hours2);
	printf("Course 1 Grade: %c\t%3.2f\n", grade1, credit_hours1);
	}
	/* Calculating GPA */
	/* Each grade represents a gpa value per 1 credit hours */
	/* To calculate total gpa, each course grade is to be add total number of grade value and */
	/* divide by total number of credit hours */
	
	/* User inputs grade 1 and credit hours */
	/* User inputs grade 2 and its credit hours */
	/* Output is displayed with of each course in an ascending order */
	/* Have preset values for letter grade in a float variable */
	/* Assign values to letter grade for each course */
	/* Add grade values */
	/* Add credit hours */
	/* Divide total grade value by credit hours */
	/* Display result */
	/* Print grade appropriate message */
	

	float a_grade = 4.0, b_grade = 3.0, c_grade = 2.00, d_grade = 1.00, f_grade = 0, numgrade1, numgrade2;

	switch (grade1)
	{
	case 'A':
	numgrade1 = a_grade * credit_hours1;
	break;
	case 'B':
	numgrade1 = b_grade * credit_hours1;
	break;
	case 'C':
	numgrade1 = c_grade * credit_hours1;
	break;
	case 'D':
	numgrade1 = d_grade * credit_hours1;
	break;
	case 'F':
	numgrade1 = f_grade * credit_hours1;
	break;
	}
	
	switch (grade2)
	{
	case 'A':
	numgrade2 = a_grade * credit_hours2;
	break;
	case 'B':
	numgrade2 = b_grade * credit_hours2;
	break;
	case 'C':
	numgrade2 = c_grade * credit_hours2;
	break;
	case 'D':
	numgrade2 = d_grade * credit_hours2;
	break;
	case 'F':
	numgrade2 = f_grade * credit_hours2;
	break;
	}

	float total_numgrade, total_credithrs, gpa;

	total_numgrade = numgrade1 + numgrade2;
	total_credithrs = credit_hours1 + credit_hours2;
	gpa = total_numgrade / total_credithrs;

	printf("Student GPA: %3.2f\n", gpa);

	if (gpa < 2.0)
	printf("WARNING!\n");
	else if (gpa >= 3.5)
	printf("CONGRATS!\n");

	
	

}
