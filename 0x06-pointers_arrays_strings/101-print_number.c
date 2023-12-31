#include "main.h"

/**
 * print_number - prints an integer
 * @n: input value
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int u;

	if (n < 0)
	{
		u = -n;
		_putchar('-');
	} else
	{
		u = n;
	}

	if (u / 10)
		print_number(u / 10);

	_putchar((u % 10) + '0');
}
