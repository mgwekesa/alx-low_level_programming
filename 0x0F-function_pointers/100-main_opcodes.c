#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the opcodes of itself
  * @argc: the number of arguments
  * @argv: an array of pointers to the arguments
  * Return: returns 0
  */

int main(int argc, char *argv[])
{
	int byte;
	int i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	for (;i < byte; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == byte - 1)
			continue;
		printf(" ");
		address++;
	}

	printf("\n");

	return (0);
}
