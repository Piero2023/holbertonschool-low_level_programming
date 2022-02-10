#include "main.h"

/**
 * _isupper - check if it is uppercase
 * @c: letter in cuestion
 * Return: 1 if it uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
