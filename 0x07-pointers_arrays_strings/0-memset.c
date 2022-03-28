#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 *           to by s with the constant byte b
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: the number of bytes to be filled with a constant byte b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s; /* assign the contents of s to mem */
	char const_char = b;

	for (i = 0; i < n; i++)
		mem[i] = const_char;

	return (mem);
}
