#include "main.h"

/**
 * print_line - print
 * @n: print
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);

	}

	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
		_putchar ('_');
		}
		_putchar (10);
	}
}
