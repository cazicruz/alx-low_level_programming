#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 * Discription: this is a function that swaps two values
 * @a: pointer variable
 * @b: pointer variable
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int m;

	while (dest[n] != 0)
	{
		n++
	}
	for (m = 0; src[m] != 0; m++, n++)
	{
		dest[n] = src[m];
	}
}
