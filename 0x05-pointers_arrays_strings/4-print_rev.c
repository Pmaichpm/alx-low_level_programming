#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: value of the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
