#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *p = (char *)malloc(size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (*p);
}
