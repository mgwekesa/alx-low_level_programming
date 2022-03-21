#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte(\0), to the buffer pointed to by dest.
 * Return: the pointer to dest.
 * @dest: this is the pointer to the buffer
 * @src: this is the pointer to the string to be copied
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
