#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: the parameter
  * Return: returns a pointer to the allocated memory
  *         if malloc fails, function cause normal process termiation with
  *         a status value of 98
  */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

