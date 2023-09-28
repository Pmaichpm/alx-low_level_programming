#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: insert number
 * @m: insert number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, tran;

	tran = 0;
	for (x = 8 * sizeof(n) - 1; x >= 0; x--)
		if (((n ^ m) >> x) & 1)
			tran++;
	return (tran);
}
