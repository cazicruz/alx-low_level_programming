#include "main.h"

/**
 * print_sign - Entry point
 * @n: this is the input or number to compare
 * Return: always return 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar(0);
	}
	_putchar('\n')

}
