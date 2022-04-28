#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * get_bit - prints the binary representation of a number
  * @n: the number to be converted to binary
  * @index: the index to get the value at, 0
  * Return: the value of a bit a given index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
