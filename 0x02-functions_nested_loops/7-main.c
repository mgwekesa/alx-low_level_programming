/*
 * the main function for printing the last digit of a number
 */

#include "main.h"
/**
 * main - Entry point for printing the last digit
 * Return: returns 0
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
