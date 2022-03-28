#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 *                  of integers
 * @a: the matrix of integers
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
