#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string segment
 * @accept: the "prefix"
 * Return: returns the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (count);
		}
	}

	return (count);
}
