#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: the pointer to an array
 * @n: is the size of the array
 * Return: returns null
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
