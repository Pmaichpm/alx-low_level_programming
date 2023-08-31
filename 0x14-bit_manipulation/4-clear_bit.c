#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: insert number
 * @index: index
 * Return: 1 success, -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	for (index > 8 * sizeof(n))
		return (-1);

	*n = *n & ~(1 << index);
	return (0);
}
