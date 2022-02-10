#include "main.h"

/**
 * _isdigit - check if it is uppercase
 * @c: letter in cuestion
 * Return: 1 if it uppercase or 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
