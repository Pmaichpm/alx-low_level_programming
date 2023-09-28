#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 (big endian), 1 (little endian)
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *end = (char *) &x;

	return (*end);
}
