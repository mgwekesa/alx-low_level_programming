#include <stdio.h>

/**
 * main - Entry point for the program. Prints all arguments it receives
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
