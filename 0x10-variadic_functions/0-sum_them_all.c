#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: the number of parameters
 * @...: other parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);
	return (sum);
}
