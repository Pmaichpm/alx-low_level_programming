#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: insert parameter
 * @index: insert index
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shk;

	if (index > 64)
		return (-1);

	shk = n >> index;

	return (shk & 1);
}
