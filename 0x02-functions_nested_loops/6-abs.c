/*
 * a program for finding the absolute value of a number
 */

#include "main.h"

/**
 * _abs - function that computes the absolute values
 * @val: the input from the user
 * Return: returns the abs value
 */

int _abs(int val)
{
	if (val < 0)
		return (val * -1);
	return (val);
}
