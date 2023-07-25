#include "main.h"

/**
 *puts2 - prints every other character of a string starts with first character
 *@str: string to be evaluated
 *Return: void
 */

void puts2(char *str)
{
	int x;
	int z;

	while (str[z] != '\0')
	{
	z++;
	}
	for (x = 0 ; x < z; x += 2)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
