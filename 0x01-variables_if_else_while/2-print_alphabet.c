/*
 * Printing the letters of alphabet using putchar and while loop
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

	c = 'a';
	while (c != 'z')
	{
		putchar(c);
		c++;
	}
	putchar(c);
}
