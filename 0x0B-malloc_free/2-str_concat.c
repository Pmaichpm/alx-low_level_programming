#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: insert value
 * @s2: insert value
 * Return: void
 **/

char *str_concat(char *s1, char *s2)
{
	char *strx;
	int x, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = z = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[z] != '\0')
		z++;
	strx = malloc(sizeof(char) * (x + z + 1));
	if (strx == NULL)
		return (NULL);
	x = z = 0;
	while (s1[x] != '\0')
	{
		strx[x] = s1[x];
		x++;
	}
	while (s2[z] != '\0')
	{
		strx[x] = s2[z];
		x++, z++;
	}
	strx[x] = '\0';
	return (strx);
}
