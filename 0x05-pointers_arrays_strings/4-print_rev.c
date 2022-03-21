#include "main.h"

/**
 * _strlen - determines the length of the string
 * @s: is the parameter of the string
 * Return: returns the counter
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}

/**
 * print_rev - prints the string in reverse
 * @s: is the string parameter
 */

void print_rev(char *s)
{
	int count = _strlen(s);

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
