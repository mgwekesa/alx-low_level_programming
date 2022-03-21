#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the parameter of the string we'd use
 */

void puts_half(char *str)
{
	int count = 0;
	int i = 0;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
	{
		for (i = (count / 2); i < count; i++)
			_putchar(str[i]);
	}

	else
	{
		for (i = (count + 1) / 2; i < count; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
