#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: First integer in the swap
 * @b: Second integer in the swap
 *
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
