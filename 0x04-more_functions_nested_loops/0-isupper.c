#include <stdio.h>

/*
 * _isupper - starting point
 * Returning: return 0 if lowercase and 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
