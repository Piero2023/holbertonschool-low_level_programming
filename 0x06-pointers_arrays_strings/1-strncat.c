#include "main.h"

/**
 * *_strncat - print
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (a = 0; src[a] != '\0' && a < n; i++, a++)
	{
	dest[i] = src[a];
	}
	dest[i] = '\0';

	return (dest);
}
