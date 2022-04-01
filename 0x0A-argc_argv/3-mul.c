#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program. Multiplies two numbers
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: returns 0 if two arguments are given, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int x1, x2, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x1 = atoi(argv[1]);
	x2 = atoi(argv[2]);
	y = x1 * x2;

	printf("%d\n", y);

	return (0);
}
