#include "main.h"

/**
 * helper - square root of number
 * @i: input number
 * @j: iterator
 * Return: square root or -1
 */

int primer(int i, int j)
{
	if ((i % j) == 0)
	{
		if (i == j)
			return (1);
		else
			return (0);
	}
	return (primer(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the natural square root of a number
 */

int is_prime_number(int n)
{
	return (primer(n, 2));
}
