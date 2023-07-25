#include "main.h"
#include<stdio.h>
/**
 *_strcpy - copies the string pointed
 *@dest: value of destination
 *@src: value of source
 *Return: pointer goes to destination
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
