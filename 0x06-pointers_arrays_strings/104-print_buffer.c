#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print the size of the content of the buffer pointed
 *                by b, 10 bytes per line. Position of first byte is 0.
 *                Each line has hex content, separated by a space
 *                if size <= 0, output '\n'
 * @b: buffer to be printed
 * @size: number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byte;
	int i;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + byte));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				break;

			else if (*(b + i + byte) >= 31 &&
				 *(b + i + byte) <= 126)
				printf("%c", *(b + i + byte));
			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
