#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: this is the input or letter to compare
 * Return: always return 0 (success)
 */

int print_last_digit(int n)
{
	int lastnum;


	lastnum = n % 10;

	if (lastnum < 0)
		lastnum = -lastnum;
	_putchar(lastnum + '0');
	return (lastnum);
}
