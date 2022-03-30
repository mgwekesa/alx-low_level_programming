#include "main.h"

/**
 * _pow_recursion - finds the value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: returns -1 if y is less than 0, else the value of x^y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
