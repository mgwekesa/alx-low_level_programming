/*
 * Printing the letters of alphabet in reverse using putchar and for..loop
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
