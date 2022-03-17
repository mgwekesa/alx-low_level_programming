#include "main.h"

/**
 * print_number - prints the given number
 * @n: the parameter the print_number takes
 */

/*
 * the concept of recursion is tested in this exercise
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
