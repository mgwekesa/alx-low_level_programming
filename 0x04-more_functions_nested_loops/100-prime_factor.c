#include <stdio.h>

/**
 * prime_factor - finds the largest prime factor of 612852475143
 */

void prime_factor(void)
{
	unsigned long prime = 612852475143;
	unsigned long factor;

	while (factor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (factor = 3; factor < (prime / 2); factor += 2)
		{
			if ((prime % factor) == 0)
			{
				prime /= factor;
			}
		}
	}
	printf("%lu\n", prime);
}

/**
 * main - Entry point
 * Return: returns 0;
 */

int main(void)
{
	prime_factor();
	return (0);
}
