#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: character
 * Return: 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
