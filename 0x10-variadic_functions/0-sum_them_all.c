#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: insert value
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list ls;

	if (n == 0)
		return (0);

	va_start(ls, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ls, int);

	va_end(ls);
	return (sum);
}

