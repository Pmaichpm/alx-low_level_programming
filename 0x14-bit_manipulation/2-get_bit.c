#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: insert number
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	val = (n >> index);
	if (index > 32)
	return (-1);
	return (val & 1);
}
