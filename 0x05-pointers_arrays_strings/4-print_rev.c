#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */


void print_rev(char *s)
{
	int count = 0;
	int n;

	while (s[count] != 0)
	{
		count++;
	}
	n = count;
	for (; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
