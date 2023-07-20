#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
*
* Return: void
*/
void more_numbers(void)
{
	int a;
	char y;

	for (a = 0; a < 10; a++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
