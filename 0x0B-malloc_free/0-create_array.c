#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * @size: size of array
 * @c: char to fill array with
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	return (p);
}
