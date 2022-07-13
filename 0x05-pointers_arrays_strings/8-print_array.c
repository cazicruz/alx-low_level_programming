#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: string
 * Return: returns the lenght of the string
 */


void print_array(int *a, int n)
{
	int i = n - 1;

	for (i = 0; i < n; i++)
	{
		if ((i +1) >= n)
		{
			_putchar(a[i]);
		}
		else
		{
			_putchar(a[i]);
			_putchar(",");
			_putchar(" ");
		}

	}
	if (i == n)
		_putchar('\n');
}
