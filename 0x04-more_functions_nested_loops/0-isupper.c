#include "main.h"

/**
 * @c: inpute parameter
 * _isupper -> starting point
 * Returning: return 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
