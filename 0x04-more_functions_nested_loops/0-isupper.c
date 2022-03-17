/*
 * checks for the uppercase character
 */

#include "main.h"

/**
 * _isupper - checks for the uppercase character
 * Return: 1 if c is uppercase, 0 otherwise
 * @c: character parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
