#include <stdio.h>

/**
 * main - prints name of file it was compiled from,followed by new line
 *
 * Return: void
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
