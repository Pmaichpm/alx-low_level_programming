#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: insert array
 * @size: insert size
 * @cmp: insert value
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
				return (n);
		}
	}

	return (-1);
}
