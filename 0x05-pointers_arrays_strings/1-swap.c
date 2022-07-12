#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 * Discription: this is a function that swaps two values
 * @a: pointer variable
 * @b: pointer variable
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;

	*b = n;
	*a = m;
}
