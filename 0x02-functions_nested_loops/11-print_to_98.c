/*
 * prints all natural numbers from n to 98, followed by new line
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - the function that does the operation
 * @n: this defines the direction of natural numbers towards 98
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				continue;
			}
			printf(", ");
		}
	}

	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				continue;
			}
			printf(", ");
		}
	}
}
