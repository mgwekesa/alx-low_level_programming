#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints number, followed by new line
  * @separator: an input string to be printed between numbers
  * @n: the number of parameters
  * @...: other parameters
  * Return: printed numbers
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
