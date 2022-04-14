#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * print_all - prints everything
  * @format: list of arguments to be passed
  * @...: the other parameters
  */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *tmp;
	int i;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				tmp = va_arg(ap, char*);
				if (tmp == NULL)
					tmp = "(nil)";
				printf("%s", tmp);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
