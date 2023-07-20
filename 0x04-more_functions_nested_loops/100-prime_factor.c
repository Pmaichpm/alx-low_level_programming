#include <stdio.h>
/**
* main -  prints the largest prime factor
* @void: no argument
* Return: 0
*/
int main(void)
{
	long x, number = 612852475143;

	for (x  = 2; x <= number; x++)
	{
		if (number % x == 0)
		{
			number = number / x;
			x--;
		}
	}
	printf("%lu\n", x);
	return (0);
}
