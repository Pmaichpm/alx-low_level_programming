#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * @n: insert number
 * @m: insert number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;
	unsigned long int rotate = n ^ m;

	while (rotate)
	{
		sum++;
		rotate &= (rotate - 1);
	}

	return (sum);
}
