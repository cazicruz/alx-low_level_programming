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
	int n;

	while (str[count] != 0)
	{
		/*if (str[count] >= 0)
		{
			_putchar(str[count]);
		}
		else
		{
			_putchar('\n');
		}*/
		count++;
	}
	for (n = 0; n <= count - 1; n += 2)
	{
		_putchar(str[n]);
	}
	if (str[count] == 0)
		_putchar('\n');
}
