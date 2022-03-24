#include "main.h"

/**
 * _strncat - a function concatenating two strings
 * @dest: the string being appended to
 * @src: the string to be appended
 * @n: the number of bytes from src
 * Return: returns a resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_src = 0;
	int i = 0;
	char *temp = dest;
	char *start_src = src;

	/*
	 * the while loop finds the length of src
	 */
	while (*src)
	{
		len_src++;
		src++;
	}

	/*
	 * the while loop starts the concatenation with dest
	 */
	while (*dest)
		dest++;

	/*
	 * the if finds if length of src is less then n
	 * if it is less, n is assigned the length of src
	 */
	if (n > len_src)
		n = len_src;
	/*
	 * src is then reassigned the contents of start_src
	 */
	src = start_src;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';
	return (temp);
}
