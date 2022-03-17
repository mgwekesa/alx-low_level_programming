#include <stdio.h>

/**
 * prime_factor - finds the largest prime factor of 612852475143
 */

void prime_factor(void)
{
	unsigned long prime = 612852475143;
	unsigned long factor;

	for (factor = 3; factor < 12057; factor += 2)
	{
		while (prime % factor == 0 && prime != factor)
			prime /= factor;
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
