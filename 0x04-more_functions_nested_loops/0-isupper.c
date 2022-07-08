#include <stdio.h>
#include "main.h"

/*
 * _isupper - starting point
 * Returning: return 0 if lowercase and 1 if uppercase
 */

int _isupper(int c)
{
	char a = c + '0'
	if (a >= 65 && <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
