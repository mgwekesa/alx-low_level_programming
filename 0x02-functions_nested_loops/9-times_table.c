/*
 * this program creates the 9 times table, starting with 0
 */

#include "main.h"

/**
 * times_table - a function that performs the times operation
 */

void times_table(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 10; i++)
		{
			if ((i * j > 9))
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}

			else
			{
				if (i != 0)
					_putchar(' ');
				_putchar((i * j) + '0');
			}
		if (i == 9)
			continue;
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');
		j++;
	}

}
