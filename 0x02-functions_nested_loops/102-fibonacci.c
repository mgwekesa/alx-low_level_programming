/*
 * the program focuses on writing the first 50 Fibonacci numbers
 */

#include <stdio.h>

/**
 * fibonacci - function printing the first 50 fibonacci numbers
 */

void fibonacci(void)
{
	int i = 1;
	int j = 2;
	int tmp;
	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		printf("%d", i);
		if (counter == 49)
			continue;
		printf(", ");
		tmp = j;
		j = i + tmp;
		i = tmp;
	}
	printf("\n");
}

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	fibonacci();
	return (0);
}
