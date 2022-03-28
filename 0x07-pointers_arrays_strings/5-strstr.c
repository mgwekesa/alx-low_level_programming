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
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}

	return ('\0');
}
