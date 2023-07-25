#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password
 *
 * Return: void
 */

int main(void)
{
	char a;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
	a = rand() % 128;
	i += a;
	putchar(a);
	}
	putchar(2772 - i);

	return (0);
}
