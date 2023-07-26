#include "main.h"

/**
 * leet - encodes a string into 1337
 * @i: input value
 *
 * Return: void
 */
char *leet(char *i)
{
	int n, k;

	char *x = "lLtToOeEaA";
	char *y = "1177003344";

	for (n = 0; i[n] != '\0'; n++)
	{
		for (k = 0; k < 10; k++)
		{
			if (i[n] == x[k])
			{
				i[n] = y[k];
			}
		}
	}

	return (i);
}
