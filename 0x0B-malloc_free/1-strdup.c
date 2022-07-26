#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 * @str: pointer to input array
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
	p = (char *)malloc(i + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	else
		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
