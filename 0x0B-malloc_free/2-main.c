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

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
