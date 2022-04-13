#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - selects the correct function to perform the operation
  *               asked by the user.
  * @s: the operator passed as argument to the program
  * Return: a pointer to the function that corresponds to the operator
  *         given as a parameter.
  */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
	}
	return ('\0');
}
