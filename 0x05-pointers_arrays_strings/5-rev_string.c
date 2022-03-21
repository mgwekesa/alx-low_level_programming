#include "main.h"

/**
 * rev_string - reverses the string
 * @s: the string parameter
 * Return: returns a reversed string
 */

void rev_string(char *s)
{
	int count = 0;
	char rev_c;
	int i = 0;

	while (s[count] != '\0')
		count++;

	while (i < count--)
	{
		rev_c = s[i];
		s[i++] = s[count];
		s[count] = rev_c;
	}
}
