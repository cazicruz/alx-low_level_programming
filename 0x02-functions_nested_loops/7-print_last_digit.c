#include "main.h"

/**
 * print_last_digit - Entry point
 * @c: this is the input or letter to compare
 * Return: always return 0 (success)
 */

int print_last_digit(int n)
{
	lastnum = (n % 10);
	_putchar(lastnum);
	return (0);
}
