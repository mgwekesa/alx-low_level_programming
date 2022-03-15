/*
 * functions checks whether a given function is a lowercase
 */

#include "main.h"

/**
 * _islower - checks whether a given value is lowercase
 * @c: the input from the user
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
