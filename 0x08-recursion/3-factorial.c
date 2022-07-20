#include "main.h"
/**
 * factorial - Entry point
 * @n: input parameter
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (- 1);
	}
	else if (n == 0; || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
