#include "main.h"

/**
 * _atoi - converting string to an integer
 * @s: the parameter of the string to be converted
 * Return: returns the integer of the value converted, 0 otherwise
 */

int _atoi(char *s)
{
	int pos_neg = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			pos_neg *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * pos_neg);
}
