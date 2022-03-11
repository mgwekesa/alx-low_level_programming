/*
 * Prints all possible combinations of two-digit numbers using for_loop and
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
	int d;

	for (c = 0; c < 9; c++)
	{
		for (d = c + 1; d < 10; d++)
		{
			if (c != d)
			{
				putchar(c + '0');
				putchar(d + '0');
				if (c == 8 && d == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
