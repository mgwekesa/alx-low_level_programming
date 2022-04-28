#include "main.h"
#include <stdlib.h>

/**
  * flip_bits - returns the number of bits to flip tp get from one to another
  * @n: the first number
  * @m: the second number
  * Return: number of bits to flip to get to another
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_bits = 0;

	while (xor > 0)
	{
		flip_bits += (xor & 1);
		xor = xor >> 1;
	}

	return (flip_bits);
}
