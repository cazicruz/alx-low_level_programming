#include "main.h"
/**
 * print_to_98 - entry point
 * @n: input parameter
 * Return: x + y
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
			n++
		}
	}
	return (0);
}
