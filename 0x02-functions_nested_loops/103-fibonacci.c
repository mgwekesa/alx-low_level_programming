/*
 * the program focuses on writing the first 50 Fibonacci numbers
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
