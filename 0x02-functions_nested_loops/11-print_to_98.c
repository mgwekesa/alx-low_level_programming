/*
 * a function that prints all natural numbers from n to 98, followed by new line
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - the function that does the operation
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
				printf('\n');
				continue;
			}
			printf(", ");
		}
	}
}
