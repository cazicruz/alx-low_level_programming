#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @str: string
 * Return: returns the lenght of the string
 */


void _puts(char *str)
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
		count++;
	}
}
