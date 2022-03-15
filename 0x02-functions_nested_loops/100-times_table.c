/*
 * this program creates the n times table, starting with 0
 */

#include "main.h"

/**
 * times_table - a function that performs the times operation
 */

void print_times_table(int n)
{
	int i;
	int j = 0;

	if (n > 0 && n < 15)
	{
		while (j <= n)
		{
			_putchar('0');
			for (i = 1; i <= n; i++)
				outputformat(i * j);
			_putchar('\n');
			j++;
		}
	}

}

/**
 * outputformat - formats the output appropriately
 * @n: the number dictating the format
 */

void outputformat(int m)
{
	if (m <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(m + '0');
	}

	else if (m > 9 && m <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(m / 100 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar(m % 10 + '0');
	}
}
