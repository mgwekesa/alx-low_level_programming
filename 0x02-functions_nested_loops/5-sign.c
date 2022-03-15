/*
 * this program prints the size of a number
 */

#include "main.h"
/**
 * print_sign - function that checks for the sign of a number
 * @n: is the parameter that the function takes
 * Return: returns 1 and prints + if n is greater than zero
 *         returns 0 and prints 0 if n is zero
 *         returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
