#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */


void _puts(char *str)
{
	int count = 0;

	for (; count >= 0; count++)
	{
		_putchar(str[count]);
		if (count == 0)
			putchar('\n');
	}
}
