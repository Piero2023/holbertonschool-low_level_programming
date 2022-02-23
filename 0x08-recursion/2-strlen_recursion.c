#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - prototype
 * @s: pointer
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
