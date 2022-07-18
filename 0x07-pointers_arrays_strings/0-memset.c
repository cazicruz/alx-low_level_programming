#include "main.h"
#include <stdio.h>

/**
 * *_memset - Entry point
 *  @n: number of bytes to fill
 *  @b: constant byte
 * return: Always return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
