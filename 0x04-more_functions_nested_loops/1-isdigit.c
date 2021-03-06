/*
 * checks whether a given input is a number
 */

#include "main.h"

/**
 * _isdigit - checking whether the input is a digit
 * @c: the input parameter/ character
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
