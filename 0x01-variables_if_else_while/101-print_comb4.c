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
	int d;
	int e;

	for (c = 0; c < 8; c++)
	{
		for (d = c + 1; d < 9; d++)
		{
			for (e = d + 1; e < 10; e++)
			{
				if (c != d && c != e)
				{
					putchar(c + '0');
					putchar(d + '0');
					putchar(e + '0');
					if (c == 7 && d == 8 && e == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
