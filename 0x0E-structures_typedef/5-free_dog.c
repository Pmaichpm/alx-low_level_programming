#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: insert value
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		;
	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
