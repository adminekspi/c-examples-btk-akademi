#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");

	bool p = true;
	bool q = false;

	printf("%d\n", p && q);
	printf("%d\n", p || q);

	return EXIT_SUCCESS;
}
