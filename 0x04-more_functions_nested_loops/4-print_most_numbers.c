#include "main.h"

/**
 * print_numbers - print num from 0 - 9
 *  Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		if (a != 50 && a != 52)
		_putchar(a);
	}
	_putchar('\n');
}
