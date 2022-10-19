#include "main.h"

/**
 * _isupper -> starting point
 * @c: inpute character
 * Returning: return success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
