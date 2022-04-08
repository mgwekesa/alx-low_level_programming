#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: memory of an array of nmemb elements of size bytes
  * @size: number of elements of size bytes
  * Return: returns a pointer to the allocated memory.
  *         the memory is set to zero
  *         if nmemb or size is 0, _calloc returns NULL
  *         if malloc fails, then _calloc returns NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return ('\0');

	space = malloc(nmemb * size);
	if (space == NULL)
		return ('\0')

	while (i < nmemb * size)
	{
		*(space + i) = 0;
		i++;
	}
	return (space);
}
