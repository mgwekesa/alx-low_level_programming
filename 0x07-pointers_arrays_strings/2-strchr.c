#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: returns a pointer to the first occurrence of the character c in
 *         the string s, or NULL if the character if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0'); /* returns NULL if there is no match */
}
