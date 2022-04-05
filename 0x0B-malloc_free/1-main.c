#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point for checking the code
  * Return: returns 0
  */

int main(void)
{
	char *s;

	s = _strdup("Holberton");

	if (s == NULL)
	{
		printf("failed to allocate memory");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
