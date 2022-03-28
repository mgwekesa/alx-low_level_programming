#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 *           haystack. The termination null bytes are not compared.
 * @haystack: the string containing the first occurrence of the substring needle
 * @needle: the substring in haystack
 * Return: a pointer to the beginning of the located substring, or
 *         NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
	       	if (haystack[i] == needle[i])
       		{
			do {
		       		if (needle[i + 1] == '\0')
	       				return (haystack);
       				i++;
			} while (haystack[i] == needle[i]);

		}
		haystack++;
	}

	return ('\0');
}
