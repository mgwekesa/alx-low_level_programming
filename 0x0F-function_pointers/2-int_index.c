#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @size: the number of elements in the array
  * @cmp - a pointer to the function to be used to compare values
  * Return: returns an index to the first element for which the cmp
  *    	    functio does not return 0
  *         if no element matches, return -1
  *         if size <= 0, return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
