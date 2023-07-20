#include "main.h"

/**
* print_triangle - prints a triangle
* @size: allocates integer for size of triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	
		int row, column, x;
	
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
		{
			_putchar(' ');
		}
			for (x = row + column; x >= 1; x--)
			{
				_putchar('#');
				_putchar('\n');
			}
	}
}
