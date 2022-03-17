/*
 * main for checking whether input is a digit
 */

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
