#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * size: size of array
 * c: char to fill array with
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *p = (char *)malloc(size);

	for (i = 1; i <= size; i++)
	{
		p[i] = c;
	}
	return (p);
}
