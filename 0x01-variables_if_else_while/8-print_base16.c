/*
 * Printing all the numbers of base 16 in lowercase, followed by a new line
 * using for..loop
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
	int num;
	char c;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
