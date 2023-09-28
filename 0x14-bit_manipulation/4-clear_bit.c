#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: decimal number indicator
 * @index: index
 * Return: 1 (success), -1 (fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);

}
