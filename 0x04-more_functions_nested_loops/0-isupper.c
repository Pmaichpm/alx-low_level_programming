#include "main.h"
/**
* _isupper - function that check if it's a digit
* @c: takes in a character/digit
* Return: 1 if digit and 0 if anything else
*/
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
