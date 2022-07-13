#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: string
 * Return: returns the lenght of the string
 */


void puts2(char *str)
{
	int count = 0;

	while (str[count] != 0)
	{
		if (str[count] != 0)
		{
			_putchar(str[count]);
		}
		else
		{
			_putchar('\n');
		}
		count + 2;
	}
	if (str[count] == 0)
		_putchar('\n');
}
