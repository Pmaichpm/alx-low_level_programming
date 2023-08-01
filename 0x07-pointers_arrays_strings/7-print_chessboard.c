#include "main.h"

/**
 * print_chessboard - a function that prints out the chessboard
 * @a: input value
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, n;

	for (x = 0; x < 8; x++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[x][n]);
		}
		_putchar('\n');
	}
}
