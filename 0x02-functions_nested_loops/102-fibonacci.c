/*
 * the program focuses on writing the first 50 Fibonacci numbers
 */

#include <stdio.h>

/**
 * fibonacci - function printing the first 50 fibonacci numbers
 */

void fibonacci(void)
{
	long long int i = 1;
	long long  int j = 2;
	long long int tmp;
	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		printf("%lu", i);
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
