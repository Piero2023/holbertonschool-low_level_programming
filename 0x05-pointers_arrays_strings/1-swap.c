#include "main.h"

/**
 *swap_int - print
 *@aux:print
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
