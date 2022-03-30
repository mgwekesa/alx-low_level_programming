#include "main.h"

/**
 * s_root - finds out if a given number has a natural root
 * @n: the number
 * @r: the root of the number
 * Return: returns the root if it exists, else -1
 */

int s_root(int n, int r)
{
	if ((r * r ) == n)
		return (r);
	if (r == n / 2)
		return (-1);
	return (s_root(n, r + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of n
 * @n: the number
 * Return: returns -1 if n does not have natural square root, else sqrt(n)
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n <= 0)
		return (-1);

	if (n == 1)
		return (1);

	return (s_root(n, r));
}
