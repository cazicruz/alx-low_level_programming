#include "main.h"

/**
 * _abs - Entry point
 * @n: this is the input or number to compare
 * Return: always return 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
