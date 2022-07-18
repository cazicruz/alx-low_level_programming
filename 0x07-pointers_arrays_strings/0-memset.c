#include "main.h"
#include <stdio.h>

/**
 * *_memset - Entry point
 * return: Always return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*s = b;
	}
	return (*s);
}
