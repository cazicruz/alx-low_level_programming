#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	unsigned int *p = (unsigned int *)malloc(size * sizeof(unsigned int));
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (*p);
}
