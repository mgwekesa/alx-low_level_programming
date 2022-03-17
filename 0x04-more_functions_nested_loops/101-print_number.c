#include "main.h"

/**
 * print_number - a function that prints the integer
 * @n: is the parameter that print_number takes
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - it prints n
 * @m: the parameter the print_number takes
 */

void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
	{
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
	}
}
