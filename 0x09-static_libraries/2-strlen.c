#include <stdio.h>

/**
*_strlen - returns the length of a string
*@str: value of length of string
*Return: (0)
*/

int _strlen(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}
