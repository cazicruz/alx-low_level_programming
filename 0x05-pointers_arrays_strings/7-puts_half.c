#include <stdio.h>
#include "main.h"

/**
 * puts_half - Entry point
 * @str: string
 * Return: returns the lenght of the string
 */


void puts_half(char *str)
{
	int count = 0;
	int n;

	while (str[count] != 0)
	{
		count++;
	}
	count = count -1;
	for (n = 0; n <= count / 2; n++)
	{
		_putchar(str[n]);
	}
	if (str[count] == 0)
		_putchar('\n');
}
