#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -print strings
 * @separator: separator
 * @n:number of arguments
 * Return: the sum of the arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *valores;

	va_list parametros;

	va_start(parametros, n);

	for (i = 0; i < n; i++)
	{
		valores = va_arg(parametros, char *);

		if (separator == NULL)
			printf("%s", cadena);

		else if (i == 0)
			printf("%s", cadena);
		else
			printf("%s%s", separator, cadena);
	}
	va_end(parametros);
	printf("\n");
}
