#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: insert value
 * @n: insert value
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int x;

	va_start(ls, n);
	for (x = 0; x < n; x++)
	{
		if (x > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ls, int));
	}
	va_end(ls);
	printf("\n");
}
