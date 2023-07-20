#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @i: Integer amount of _
* Return: void
*/

void print_line(int i)
{
	char a;

	for (a = 0; a < i; a++)
		_putchar('_');
	_putchar('\n');

}
