#include <stdio.h>

/**
 * main - Entry ppint for the program. Prints the program name,
 *        followed by a new line
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: returns 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
