#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");

	int a = 0;
	int b = 0;
	int c = 0;

	printf("Enter a, b and c of the quadratic equation: ");
	scanf_s("%d%d%d", &a, &b, &c);

	int d = (b * b) - (4 * a * c);

	if (d > 0)
	{
		puts("The equation has two distinct roots.");
	}
	else if (d == 0)
	{
		puts("The equation has a double root.");
	}
	else
	{
		puts("The equation has not a root.");
	}

	return EXIT_SUCCESS;
}
