#include "main.h"

/**
 * adds_strings - the functions adds numbers in a string
 * @n1: the first number to be added
 * @n2: the second number to be added.
 * @r: buffer storing the result.
 * @r_i: current index of the buffer.
 * Return: returns pointer to result if size of buffer is big enough, else 0
 */

char *adds_strings(char *n1, char *n2, char *r, int r_i)
{
	int no, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_i--)
	{
		no = (*n1 - '0') + (*n2 - '0');
		no += tens;
		*(r + r_i) = (no % 10) + '0';
		tens = no / 10;
	}

	for (; *n1; n1--, r_i--)
	{
		no = (*n1 - '0') + tens;
		*(r + r_i) = (no % 10) + '0';
		tens = no / 10;
	}

	for (; *n2; n2--, r_i--)
	{
		no = (*n2 - '0') + tens;
		*(r + r_i) = (no % 10) + '0';
		tens = no / 10;
	}

	if (tens && r_i >= 0)
	{
		*(r + r_i) = (tens % 10) + '0';
		return (r + r_i);
	}

	else if (tens && r_i < 0)
		return (0);

	return (r + r_i + 1);
}
/**
 * infinite_add - function adding two numbers
 * @n1: parameter for first number
 * @n2: parameter for second number
 * @r: buffer storing the result
 * @size_r: size of buffer
 * Return: return pointer to the result if size of buffer is big enough; else 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int len_n1 = 0;
	int len_n2 = 0;

	for (i = 0; *(n1 + i); i++)
		len_n1++;

	for (i = 0; *(n2 + i); i++)
		len_n2++;

	if (size_r <= len_n1 + 1 || size_r <= len_n2 + 1)
		return (0);

	n1 += len_n1 - 1;
	n2 += len_n2 - 1;
	*(r + size_r) = '\0';

	return (adds_strings(n1, n2, r, --size_r));
}
