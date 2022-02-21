#include "main.h"

/**
 * _memset - prototype pointer
 * @s: pointer
 * @n: int
 * @b: char
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for ( ; n > 0; s++, n--)
	{
		*s = b;
	}
	return (s);
}
