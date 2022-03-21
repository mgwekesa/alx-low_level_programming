#include "main.h"

/**
 * _strlen - checks for the length of the string
 * @c: the input parameter
 * Return: returns counter
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return counter;
}
