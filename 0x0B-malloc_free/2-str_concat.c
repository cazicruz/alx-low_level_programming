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
	char *p;
	unsigned int i, j, k, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strout = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		p[k] = s1[k];

	m = j;
	for (j = 0; j <= m; k++, j++)
		p[k] = s2[j];

	return (p);
}
