#include "main.h"

/**
 * _islower - Entry point
 * @c: this is the input or letter to compare
 * Return: always return 0 (success)
 */

int _isalpha(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
