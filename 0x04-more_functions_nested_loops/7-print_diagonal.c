#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @i: takes in an integer
*/

void print_diagonal(int i)
{
	int p, n;

	if (p <= 0)
	{	_putchar('\n');
	}
	for (p = 0; p < i; p++)
	{
		for (n = 0; n <= p; j++)
		{
			if (p == n)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
