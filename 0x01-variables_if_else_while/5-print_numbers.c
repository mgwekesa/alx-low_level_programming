/*
 * Prints all single digit numbers of base 10 starting from 0, followed by a
 * new line
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
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
