#include "main.h"

/**
 * _memset - prototype
 * @s: pointer
 * @n: int
 */

char *_memset(char *s, char b, unsigned int n)
{
	while(n > 0)
	{
	*s = b;
	s++;
	n--;
	}
}
