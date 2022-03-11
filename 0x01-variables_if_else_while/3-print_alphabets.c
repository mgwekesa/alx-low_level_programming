/*
 * Printing the letters of alphabet in lower, then upper case using for..loop
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
