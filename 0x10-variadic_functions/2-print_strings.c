#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: insert value
 * @n: insert value
 * @...: insert value
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *c;
	va_list ls;
	unsigned int x = 0;

	va_start(ls, n);
	for (x = 0; x < n; x++)
	{
		c = va_arg(ls, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ls);
}
