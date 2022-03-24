#include "main.h"

/**
 * _strcmp - compares the string the way strcmp does it
 * @s1: the first string parameter
 * @s2: the second string parameter
 * Return: returns 0 when s1 and s2 is the same,
 *         returns 15 when first non-matching character in s1 is
 *         greater(in ASCII) than s2
 *         returns -15 when first non_matching character in s1 is
 *         less(in ASCII) than s2
 *         returns -1 when the function fail to run
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i++] && s2[i++])
	{
		if (s1[i] == s2[i])
			return (0);
		else if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
	}
	return (-1);
}
