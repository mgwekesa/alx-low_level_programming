#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int cols;

	for (rows = 0; a[rows][7]; rows++)
	{
		for (cols = 0; cols < 8; cols++)
			_putchar(a[rows][cols]);
		_putchar('\n');
	}
}
