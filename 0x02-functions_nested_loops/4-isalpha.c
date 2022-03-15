/*
 * this function checks whether a given input is an alphabet
 */

#include "main.h"

/**
 * _isalpha - checks whether a given input is an alphabet
 * @c: the argument that is passed to the function
 * Return: returns 1 if c is letter, lowercase or uppercase; 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
