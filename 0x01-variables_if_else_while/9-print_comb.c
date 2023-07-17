#include <stdio.h>

/**
* main - Print all possible combinations of single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int zero;

		for (zero = 0; zero <= 9; zero++)
		{
		putchar(zero + '0');
		if (zero < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');

	return (0);
}
