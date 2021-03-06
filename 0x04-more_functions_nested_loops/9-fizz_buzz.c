#include <stdio.h>

/**
 * fizzBuzz - prints Fizz for multiples of three
 *          - prints Buzz for multiples of five
 *          - prints FizzBuzz for multiples of three and five
 */

void fizzBuzz(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (n % 3 == 0)
		{
			printf("Fizz");
		}

		else if (n % 5 == 0)
		{
			printf("Buzz");
		}

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	fizzBuzz();
	return (0);
}
