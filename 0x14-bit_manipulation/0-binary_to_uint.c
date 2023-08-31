#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string container
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		num = 2 * num + (b[x] - '0');
	}
	return (num);
}
