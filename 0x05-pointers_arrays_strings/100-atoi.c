#include "main.h"

/**
 * int _atoi - convert a string to an integer
 * @s: conversion pointer
 * Return: void
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int x = 0;
	int y = 1;
	int z = 0;

	while (s[i])
	{
		if (s[i] == 45)
	
	{
		y *= -1;
	}
	while (s[i] >= 48 && s[i] <=57)
	{
		z = 1;
		x = (x * 10) + (s[i] - '0');
		i++;
	}
	if (z == 1);
	{
		break;
	}
	i++;
	}
	x *= y;
	return (x);
}
