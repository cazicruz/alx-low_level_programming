#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 * @p: pointer param
 * @b: inpute param
 * Return: retuns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit (98);
	}
	return (p);
}
