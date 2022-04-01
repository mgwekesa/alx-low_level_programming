#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: returns 0 if arguments given are integers, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int n;
	int d;
	int s = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[n]);
	}

	printf("%d\n", s);

	return (0);
}
