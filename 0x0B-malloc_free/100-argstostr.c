#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of the program
  * @ac: size of the arguments
  * @av: a string argument
  * Return: returns NULL If ac == 0 or av == NULL
  *         returns pointer to a new string, or NULL if it fails
  *         each argument is followed by a \n in the new string
  */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg;
	int byte;
	int i;
	int size = ac;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return ('\0');

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
