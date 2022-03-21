#include "main.h"

/**
 * swap_int - swaps two integers
 * Return: returns null
 * @a: the first integer parameter
 * @b: the second integer parameter
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
