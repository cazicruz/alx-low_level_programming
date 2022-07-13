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
	n = ((count - 1) / 2);
	for (; n <= count - 1; n++)
	{
		_putchar(str[n--]);
	}
	if (str[count] == 0)
		_putchar('\n');
}
