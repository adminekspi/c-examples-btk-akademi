#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");

	int gradeNumber = 0;
	char gradeLetter = 'F';

	printf("Enter a grade number (1-100): ");
	scanf_s("%d", &gradeNumber);

	if (gradeNumber < 100 && gradeNumber >= 90)
	{
		gradeLetter = 'A';
	}
	else if (gradeNumber < 90 && gradeNumber >= 80)
	{
		gradeLetter = 'B';
	}
	else if (gradeNumber < 80 && gradeNumber >= 60)
	{
		gradeLetter = 'C';
	}
	else if (gradeNumber < 60 && gradeNumber >= 50)
	{
		gradeLetter = 'D';
	}
	else if (gradeNumber < 50 && gradeNumber >= 0)
	{
		gradeLetter = 'F';
	}
	else
	{
		puts("Invalid grade number!");
		return EXIT_FAILURE;
	}

	printf("%c\n", gradeLetter);

	return EXIT_SUCCESS;
}
