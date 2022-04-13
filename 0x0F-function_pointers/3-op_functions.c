#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - sums a and b
  * @a: the first parameter
  * @b: the second parameter
  * Return: returns the sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts b from a
  * @a: the first parameter
  * @b: the second parameter
  * Return: returns the result of a - b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies a and b
  * @a: the first parameter
  * @b: the second parameter
  * Return: returns a * b
  */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
  * op_div - divides a by b
  * @a: the first parameter
  * @b: the second parameter
  * Return: returns a / b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - finds remainder of the division of a by b
  * @a: the first parameter
  * @b: the second parameter
  * Return: returns a % b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
