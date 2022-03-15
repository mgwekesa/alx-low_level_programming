/*
 * a function that prints the alphabet, in lowercase, followed by a new line
 */

#include <stdio.h>

/**
 * print_alphabet- the created function, printing the alphabet
 */

void print_alphabet(void)
{
	for (char alpha = 'a' ; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
}

/**
 * main - Entry point, calls print_alphabet
 * Return: returns 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
