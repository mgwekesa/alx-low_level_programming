#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the parameter of the string we'd use
 */

void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (str[count] != '\0')
		count++;

	for (; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
