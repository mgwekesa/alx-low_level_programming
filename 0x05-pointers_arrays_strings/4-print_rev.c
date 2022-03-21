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

	while (count >= 0)
	{
		_putchar(s[--count]);
	}
}
