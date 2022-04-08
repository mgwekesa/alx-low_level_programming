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
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[len_1])
		len_1++;
	while (s2[len_2])
		len_2++;

	if (n >= len_2)
		n = len_2;

	nconcat = malloc(len_1 + n + 1);

	if (nconcat == NULL)
		return ('\0');

	i = 0;
	while (i < (len_1 + n))
	{
		if (i < len_1)
			nconcat[i] = *s1, s1++;
		else
			nconcat[i] = *s2, s2++;
		i++;
	}
	nconcat[i] = '\0';
	return (nconcat);
}
