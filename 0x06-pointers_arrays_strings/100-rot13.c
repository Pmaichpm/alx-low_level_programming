#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: inputs value
 *
 * Return: void
 */
char *rot13(char *n)
{
	int x, y;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (n[x] == a[y])
			{
				n[x] = arot[y];
				break;
			}
		}
	}

	return (n);
}
