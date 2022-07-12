#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */

void _puts(char *str)
{
	int len = _strlen(str);
	int i;


	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
		if (str[i] == 0)
			_putchar('\n');
	}

}
