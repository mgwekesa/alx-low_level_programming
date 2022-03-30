#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: the given number
 * Return: returns the factorial of a given number
 *         if n < 0, return -1 indicating an error
 */

int factorial(int n)
{
	int factor = n;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
	{
		factor *= factorial(n - 1);
		return (factor);
	}
}
