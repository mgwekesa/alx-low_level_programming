/*
 * prints the 10 times the alphabet, in lowercase, followed by a new line
 */
 #include "main.h"

/**
 * print_alphabet_x10 - function for printing alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int counter;
	char c;

	for (counter = 0; counter < 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
