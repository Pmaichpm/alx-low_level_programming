#include "main.h"

/**
 * print_diagsums - prints diagonals sum
 * @a: insert value
 * @size: insert value
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int n;
	unsigned int u, x;

	u = 0;
	x = 0;

	for (n = 0; n < size; n++)
	{
		u += a[(size * n) + n];
		x += a[(size * (n + 1)) - (n + 1)];
	}

	printf("%d, %d\n", u, x);
}
