#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: insert value
 * @n: insert value
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

		if (separator != NULL && x > 0)
			printf("%s", separator);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
	}
	va_end(ls);
	printf("\n");
}
