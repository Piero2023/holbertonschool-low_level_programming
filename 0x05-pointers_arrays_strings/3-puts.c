#include "main.h"

/**
 * _puts - output of characters and strings
 * @str: print
 * Return: print
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar(10);
}
