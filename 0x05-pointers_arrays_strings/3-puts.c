#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */

void _puts(char *str)
{
	int count = 0;
	int i;


	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		if (str[i] == 0)
			_putchar('\n');
	}
	return (0);
}
