#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: insert value
 * @b: insert value
 * @n: insert value
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
