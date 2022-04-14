#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints number, followed by new line
  * @separator: an input string to be printed between numbers
  * @n: the number of parameters
  * @...: other parameters
  * Return: printed numbers
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
