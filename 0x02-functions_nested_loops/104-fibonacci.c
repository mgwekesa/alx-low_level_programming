/*
 * the program focuses on finding and printing the first 98 Fibonacci numbers
 */

#include <stdio.h>

/**
 * fibonacci - function printing the first 98 fibonacci numbers
 */

void fibonacci(void)
{
	unsigned long i = 0;
	unsigned long j = 1;
	unsigned long tmp;
	int counter;
	unsigned long i_half1;
	unsigned long i_half2;
	unsigned long j_half1;
	unsigned long j_half2;
	unsigned long half1;
	unsigned long half2;

	for (counter = 0; counter < 92; counter++)
	{
		tmp = i + j;
		printf("%lu", tmp);
		printf(", ");
		i = j;
		j = tmp;
	}

	i_half1 = i / 10000000000;
	j_half1 = j / 10000000000;
	i_half2 = i % 10000000000;
	j_half2 = j % 10000000000;

	for (counter = 93; counter <= 98; counter++)
	{
		half1 = i_half1 + j_half1;
		half2 = i_half2 + j_half2;
		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (counter == 98)
			continue;
		printf(", ");

		i_half1 = j_half1;
		i_half2 = j_half2;
		j_half1 = half1;
		j_half2 = half2;
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
