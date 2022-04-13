#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
  * main - Entry point for checking the code
  * @argc: number of arguments
  * @argv: the array of arguments
  * Return: 98 in case of an argc error
  *         99 in case of an illegal operator
  *         0 when the program runs normally
  */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Argc Error!\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Illegal Operator!");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
