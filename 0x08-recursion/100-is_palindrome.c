#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: input parameter
 * Return: void
 */

char _print_rev(char *s)
{
	char n[100];

	if (*s != '\0')
	{
		_print_rev(s + 1);
		n = *s;
	}
	return(n);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root of a number
 */

int is_palindrome(char *s)
{
	if (*s == _print_rev(*s))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
