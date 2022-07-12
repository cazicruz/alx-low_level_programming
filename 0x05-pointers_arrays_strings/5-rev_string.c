#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */


void rev_string(char *s)
{
	int count = 0;
	int n;

	while (s[count] != 0)
	{
		count++;
	}
	n = count - 1;
	for (; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
