#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_int - prints integer
 * @ls: insert value
 * @s: seperator
 *
 * Return: Always 0
 */

void print_int(char *s, va_list ls)
{
	printf("%s%d", s, va_arg(ls, int));
}

/**
 * print_char - prints character
 * @ls: insert value
 * @s: seperator
 *
 * Retturn: Always 0
 */
void print_char(char *s, va_list ls)
{
	printf("%s%c", s, va_arg(ls, int));
}

/**
 * print_str - prints string
 * @ls: insert value
 * @s: seperator
 *
 * Return: Always 0
 */
void print_str(char *s, va_list ls)
{
	char *x;

	x = va_arg(ls, char *);
	if (x == NULL)
		s = "(nil)";
	printf("%s%s", s, x);
}

/**
 * print_flt - prints floats
 * @ls: insert value
 * @s: seperator
 *
 * Return: Always 0
 */

void print_flt(va_list ls, char *s)
{
	printf("%s%f", s, va_arg(ls, double));
}

/**
 * print_all - prints anything
 * @format: insert value
 *
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	char *s;
	int x, z;
	fm_t fm[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(ls, format);
	x = 0;
	s = "";
	while (format != NULL && format[x] != '\0')
	{
		z = 0;
		while (z < 4)
		{
			if (format[x] == *(fm[z]).fm)
			{
				fm[z].p(ls, s);
				s = ", ";
			}
			z++;
		}
		x++;
	}
	printf("\n");
	va_end(ls);
}

