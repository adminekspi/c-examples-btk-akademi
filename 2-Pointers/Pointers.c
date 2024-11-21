#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	setlocale(LC_ALL, "Turkish");

	int x = 3;
	int y = 5;

	printf("x: %d, y: %d\n", x, y);

	swap(&x, &y);

	printf("x: %d, y: %d\n", x, y);

	return EXIT_SUCCESS;
}
