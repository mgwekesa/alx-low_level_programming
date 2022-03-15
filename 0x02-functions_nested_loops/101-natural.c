/*
 * computes and prints the sum of all multiples of 3 or 5 below 1024 (excluded)
 */

#include <stdio.h>

/**
 * sum_multiple_3_or_5 - finds sum of the multiples of 3 and 5 below 1024
 */

void sum_multiple_3_or_5(void)
{
	int sum;
	int counter;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			sum += counter;
		}
		counter ++;
	}

	printf("%d", sum);
}

/**
 * main - Entry point for the program
 * Return: returns 0
 */

int main(void)
{
	sum_multiple_3_or_5();
	return (0);
}
