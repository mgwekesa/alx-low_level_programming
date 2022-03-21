#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to the test
 * Return: returns 0
 */

int main(void)
{
	char s[10] = "MY School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
