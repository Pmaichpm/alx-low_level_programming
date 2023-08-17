#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - prints a name
 * @name: insert value
 * @f: insert value
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);

}
