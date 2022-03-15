/*
 * this program creates the n times table, starting with 0
 */

#include "main.h"

/**
 * print_times_table - a function that performs the times operation
 * @n: this is the parameter, determines size of table
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
	else

}

/**
 * outputformat - formats the output appropriately
 * @m: the number dictating the format
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
	else if (m > 100 && m <= 199)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(m / 100 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar(m % 10 + '0');
	}
	else
}
