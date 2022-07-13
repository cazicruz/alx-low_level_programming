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
	int i;

	while (str[count] != 0)
	{
		count++;
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}

	n = i;
	for (n++; n < count; n++)
	{
		_putchar(str[n]);
	}
	if (str[count] == 0)
		_putchar('\n');
}
