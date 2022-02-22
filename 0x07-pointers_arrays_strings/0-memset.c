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
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
