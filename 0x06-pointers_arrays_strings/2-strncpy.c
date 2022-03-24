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

	/*
	 * here is how to find the length of a string
	 */
	while (src[i++])
		len_src++;

	/*
	 * here is how to copy data to the beginning of dest
	 */
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = len_src; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
