#include "main.h"

/**
 * more_numbers - prints numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int n;
	int c = 0;

	while (c < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
		c++;
	}
}
