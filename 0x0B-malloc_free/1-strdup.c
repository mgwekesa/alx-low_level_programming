#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a new string which is a duplicate
  *           of the string str. Memory for the new string is obtained
  *           with malloc, and can be freed with free
  * @str: the string to be duplicated
  * Return: the pointer to the new string, a duplicate
  */

char *_strdup(char *str)
{
	char *dupStr;
	int i;
	int len = 0;

	if (str == NULL)
		return ('\0');

	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	dupStr = malloc(sizeof(char) * (len + 1));

	if (dupStr == NULL)
		return ('\0');

	i = 0;
	while (str[i])
	{
		dupStr[i] = str[i];
		i++;
	}

	dupStr[len] = '\0';

	return (dupStr);
}
