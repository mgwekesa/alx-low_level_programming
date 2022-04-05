#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * Return: retuns a pointer to a newly allocated space in memory containing
  *         the contents of s1, followed by the contents of s2, and null
  *	    null terminated
  *         NULL treated as an empty string
  *         On failure, return NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int i;
	int s1_len = 0;
	int s2_len = 0;
	int concat_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
	{
		s1_len++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s2_len++;
		i++;
	}
	concatStr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concatStr == NULL)
	{
		return ('\0');
	}
	i = 0;
	while (s1[i])
	{
		concatStr[concat_len++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		concatStr[concat_len++] = s2[i];
		i++;
	}
	return (concatStr);
}
