#include "main.h"

/**
 * _strcat - a function performing string concatenation
 * @dest: the string to be appended to
 * @src: the string being appended
 * Return: returns the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
