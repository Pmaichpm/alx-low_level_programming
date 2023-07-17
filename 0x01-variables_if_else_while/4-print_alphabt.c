#include <stdio.h>

/**
 *main - print lowercase alphabet except e and q
 *Return: 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if ((x != 'q') && (x != 'e'))
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');

	return (0);
}
