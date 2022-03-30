#include "main.h"

/**
 * is_divisible - checks for divisibility of a number
 * @n: the number
 * @d: the divisor
 * Return: 0 if divisible, 1 otherwise
 */

int is_divisible(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);
	return (is_divisible(n, d + 1));
}

/**
 * is_prime_number - checks whether a given number n is a prime number
 * @n: the number
 * Return: returns 0 if not prime, returns -1 if prime
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (is_divisible(n, d));
}
