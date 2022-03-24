#include "main.h"

/**
 * leet - a function encoding a string
 * @str: the string to be encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] == 'a' && str[i] == 'A')
		{
			str[i] = 4 + '0';
			i++;
		}

		while (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 3 + '0';
			i++;
		}

		while (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 0 + '0';
			i++;
		}

		while (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 7 + '0';
			i++;
		}

		while (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 1 + '0';
			i++;
		}
		i++;
	}
	return (str);
}
