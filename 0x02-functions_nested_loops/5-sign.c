#include "main.h"

/**
 * _isalpha - Entry point
 * @c: this is the input or letter to compare
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

}
