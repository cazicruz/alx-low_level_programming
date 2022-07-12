#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */

void _puts(char *str)
{
	int len;
	int count;
	len = _strlen(str);
	for (count = 0; count <= len; count++)
	{
		_putchar(str[count]);
		if (count == 0)
			putchar('\n');
	}
}
