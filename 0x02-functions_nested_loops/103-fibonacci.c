/*
 * the program focuses on using Fibonacci numbers in computations
 */

#include <stdio.h>

/**
 * fibonacci - function printing sum of the even_valued terms of
 * fibonacci numbers, up to a value of 4000000, followed by a new line
 */

void fibonacci(void)
{
	long int i = 1;
	long  int j = 2;
	long int tmp;
	long int sum;

	for (i = 1; i < 4000000;)
	{
		if (i % 2 == 0)
			sum += i;
		tmp = j;
		j = i + tmp;
		i = tmp;
	}
	printf("%lu", sum);
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
