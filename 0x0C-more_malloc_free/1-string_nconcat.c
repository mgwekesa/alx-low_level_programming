#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * @n: the first n bytes of s2
  * Return: returns pointer to a newly allocated space in memory
  *         returns NULL if the function fails
  *         if n is greater than the length of s2, then use the entire s2
  *         if NULL is passed, treat it an an empty string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int len;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		len++;
		i++;
	}

	nconcat = malloc(sizeof(char) * (len + 1));

	if (nconcat == NULL)
		return ('\0');

	len = 0;
	i = 0;
	while (s1[i])
	{
		nconcat[len++] = s1[i];
		i++;
	}

	for (i = 0; s2[i] && i < n; i++)
		nconcat[len++] = s2[i];

	nconcat[len] = '\0';

	return (nconcat);
}
