#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");

	puts("Hello, World!");

	puts("Merhaba D�nya!");

	return EXIT_SUCCESS;
}
