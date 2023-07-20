#include "main.h"

/**
* print_number - print integers only using _putchar
* @n: the integer to print
*
* Return: void
*/

void print_number(int n)
{
	unassigned int _n;

	if (n < 0)
	{
		_n = -n;
		_putchar('-')
	}
	else
	{
		_n = n;
	}
	if
		(_n / 10)
	{
		print (_n / 10)
	}
	_putchar((_n % 10) + 'n')
}
