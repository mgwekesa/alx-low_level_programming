/*
 * a function that prints the alphabet, in lowercase, followed by a new line
 */

#include "main.h"
/**
 * print_alphabet- the created function, printing the alphabet
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
