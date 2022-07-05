#include "main.h"

/**
 * _islower - Entry point
 * c - tis is the input or letter to compare
 * Return: always return 0 (success)
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
