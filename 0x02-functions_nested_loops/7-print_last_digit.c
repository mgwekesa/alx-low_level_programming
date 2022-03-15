/*
 * this function gets the last digit of a number
 */

#include "main.h"

/**
 * print_last_digit - a function that prints the last digit
 * @val: is the value given as a parameter
 * Return: returns val
 */

int print_last_digit(int val)
{
	int last;

	if (val < 0)
		last = (val * -1) % 10;
	else
		last = val % 10;
	_putchar((last % 10) + '0');
	return (last % 10);
}
