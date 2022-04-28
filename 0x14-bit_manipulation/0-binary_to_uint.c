#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string of 0 and 1
  * Return: the converted number, or 0 if
  *         there is one or more chars in the string b that is
  *         not 0 or 1
  *         b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int mul = 1;
	int len;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len])
	{
		len++;
	}

	len -= 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		n += (b[len] - '0') * mul;
		mul *= 2;
		len--;
	}
	return (n);
}
