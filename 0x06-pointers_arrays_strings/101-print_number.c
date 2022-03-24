#include "main.h"
/**
 * base10 - raised to base 10 function
 * @n: the exponent
 * Return: returns 10 raised to the exponent
 */

int base10(int n)
{
	int base = 10;

	for (; n > 0; n--)
		base *= 10;
	return (base);
}

/**
 * print_number - prints the number with _putchar
 * @n: the number to be printed
 */

void print_number(int n)
{
	int raisedTo = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
		_putchar('0');

	else
	{
		while (n / raisedTo == 0)
			raisedTo /= 10;
		while (raisedTo >= 1)
		{
			_putchar((n / raisedTo) + '0');
			n %= raisedTo;
			raisedTo /= 10;
		}
	}
}
