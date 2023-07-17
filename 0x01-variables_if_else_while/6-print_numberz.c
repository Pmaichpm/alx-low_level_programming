#include <stdio.h>

/**
* main - Print all single digit numbers only
*
* Return: 0 (Success)
*/
int main(void)
{
	int uno;

	for (uno = 0; uno < 10; uno++)
	putchar(uno + '0');

	putchar('\n');

	return (0);
}
