/*
 * Printing the letters of alphabet using putchar, if..else and for..loop
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

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
