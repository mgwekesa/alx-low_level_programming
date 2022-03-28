#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for checking the code
 * Return: returns 0;
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
