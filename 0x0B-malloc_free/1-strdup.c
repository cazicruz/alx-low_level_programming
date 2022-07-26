#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * @size: size of array
 * @c: char to fill array with
 * Return: p
 */

char *_strdup(char *str)
{
	int i, j;

	char *p;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	p = (char *)malloc(i);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (p == NULL)
	{
		return (NULL);
	}
	else
		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
	return (p);
}
