#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: insert value
 * @age: insert value
 * @owner: insert value
 *
 * Return: void
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex;
	int nm = 0, onr = 0;

	if (name != NULL && owner != NULL)
	{
		nm = _strlen(name) + 1;
		onr = _strlen(owner) + 1;
		rex = malloc(sizeof(dog_t));

		if (rex == NULL)
			return (NULL);

		rex->name = malloc(sizeof(char) * nm);

		if (rex->name == NULL)
		{
			free(rex);
			return (NULL);
		}

		rex->owner = malloc(sizeof(char) * onr);

		if (rex->owner == NULL)
		{
			free(rex->name);
			free(rex);
			return (NULL);
		}

		rex->name = _strcpy(rex->name, name);
		rex->owner = _strcpy(rex->owner, owner);
		rex->age = age;
	}

	return (rex);
}

/**
 * _strlen - Return string length
 * @s: insert value
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: insert value
 * @src: insert value
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x++] = '\0';

	return (dest);
}
