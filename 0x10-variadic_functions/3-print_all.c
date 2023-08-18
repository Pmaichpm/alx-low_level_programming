#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: insert value
 * @...: insert value
 *
 */

void print_all(const char * const format, ...)
{
	int n = 0;
	char *string, *s = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", s, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ls, double));
					break;
				case 's':
					string = va_arg(ls, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", s, string);
					break;
				default:
					n++;
					continue;
			}
			s = ", ";
			n++;
		}
	}

	printf("\n");
	va_end(ls);
}
