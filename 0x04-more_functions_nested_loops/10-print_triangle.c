#include "main.h"

/**
 * print_triangle - print traingle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{	_putchar('\n');

	}
		int height;
		int width;
		int draw;

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');

		for (draw = 1; draw <= height; draw++)
			_putchar('#');
			_putchar('\n');
	}
}
