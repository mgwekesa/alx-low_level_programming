#include "main.h"

/**
 * string_toupper - converts string to upppercase
 * @str: the pointer to the string
 * Return: returns the upper case string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
