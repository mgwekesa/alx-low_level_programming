#include "main.h"

/**
 * leet - a function encoding a string
 * @str: the string to be encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char leet[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == leet[j] ||
			    str[i] + 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}
	return (str);
}
