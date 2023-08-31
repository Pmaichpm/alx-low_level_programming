#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: insert number
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int point;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (point = n, i = 0; (point >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
