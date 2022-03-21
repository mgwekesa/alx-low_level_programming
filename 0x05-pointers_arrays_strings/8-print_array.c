#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: the array parameter
 * @n: the number of elements parameter
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
