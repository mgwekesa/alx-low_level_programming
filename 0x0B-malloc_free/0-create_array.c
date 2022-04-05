#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes it with a
  * specific char
  * @size: the size of the array
  * @c: the array
  * Return: returns NULL if size = 0, a pointer to the array, or NULL if
  * it fails
  */

char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size == 0)
		return ('\0');

	charArray = malloc(sizeof(char) * size);

	if (charArray == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		charArray[i] = c;

	return (charArray);
}
