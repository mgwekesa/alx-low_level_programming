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
	int n1;
	int n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
