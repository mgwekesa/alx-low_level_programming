/*
 * the program focuses on writing the first 98 Fibonacci numbers
 */

#include <stdio.h>

/**
 * fibonacci - function printing the first 50 fibonacci numbers
 */

void fibonacci(void)
{
	long int i = 1;
	long  int j = 2;
	long int tmp;
	int counter;

	for (counter = 0; counter < 98; counter++)
	{
		printf("%lu", i);
		if (counter == 97)
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
