#include "main.h"
#include <stdlib.h>

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: pointer to the bit
  * @index: the index to get the value at, 0
  * Return: -1 in case of an error, 1 otherwise
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
