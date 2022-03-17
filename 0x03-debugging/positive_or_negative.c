/*
 * the program applies the if statement to test for conditions
 */
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Entry point
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
