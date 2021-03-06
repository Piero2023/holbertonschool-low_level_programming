#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: num of int
 * Return: ntg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int valores;

	va_list parametros;

	va_start(parametros, n);

	for (i = 0; i < n; i++)
	{
		valores = va_arg(parametros, int);

		if (separator == NULL)
			printf("%d", valores);

		else if (i == 0)
			printf("%d", valores);
		else
			printf("%s%d", separator, valores);
	}
	va_end(parametros);
	printf("\n");
}
