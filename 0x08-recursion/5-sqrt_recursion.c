#include "main.h"

int defined_sqrt_recursion(int x, int i);

/**
 * _sqrt_recursion - initial function
 * @n: inserts value
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (defined_sqrt_recursion(n, 0));
}

/**
 * defined_sqrt_recursion - returns the natural square root of a number
 * @x: insert value
 * @i: insert value
 *
 * Return: void
 */

int defined_sqrt_recursion(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (defined_sqrt_recursion(x, i + 1));
}
