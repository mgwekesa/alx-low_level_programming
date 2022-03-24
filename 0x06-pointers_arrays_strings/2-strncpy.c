#include "main.h"

/**
 * _strncpy - works exactly like strncpy
 * @dest: the string to be copied to
 * @src: the source string
 * @n: the length of src being copied
 * Return: returns the pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0;
	int i = 0;
	char *temp = dest;
	char *start_src = src;

	while (*src)
	{
		len_src++;
		src++;
	}

	len_src++;

	if (n > len_src)
		n = len_src;

	src = start_src;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (temp);
}
