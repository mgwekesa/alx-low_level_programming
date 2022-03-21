#include "main.h"

/**
 * print_rev - prints the string in reverse
 *
 * @s: is the string parameter
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	while (count)
	{
		_putchar(s[--count]);
	}
	_putchar('\n');
}
