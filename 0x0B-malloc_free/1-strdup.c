#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{}

	p = malloc(sizeof(char) * (i + 1));

	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
		p[i] = str[i];
		p[i] = '\0';
	}

	return (p);
} 
