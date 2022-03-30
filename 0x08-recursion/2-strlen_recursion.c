#include "main.h"

/**
 * _strlen_recursion - works the same way as strlen
 * @s: the string
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;
	int i = 0;

	if (s[i] != '\0')
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}

	return (strlen);
}
