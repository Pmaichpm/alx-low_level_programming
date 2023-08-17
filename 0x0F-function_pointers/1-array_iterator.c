#include "function_pointers.h"
#include<stdlib.h>

/**
 * array_iterator - execute function on @ element
 * @array: insert value
 * @size: insert value
 * @action: insert value
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	return;
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
