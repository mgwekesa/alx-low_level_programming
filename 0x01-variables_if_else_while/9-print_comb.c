/*
 * Prints all possible combinations of single-digit numbers using for_loop and
 * if..else statement
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('$');
	return (0);
}
