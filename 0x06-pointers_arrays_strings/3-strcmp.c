#include "main.h"

/**
 * _strcmp - compares the string the way strcmp does it
 * @s1: the first string parameter
 * @s2: the second string parameter
 * Return: if s1 == s2, 0
 *         if s1 < s2, the negative difference of the first unmatched character
 *         if s1 > s2, the positive difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
