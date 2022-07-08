#include "main.h"
/**
 * print_line - print lines
 * @n: line
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
