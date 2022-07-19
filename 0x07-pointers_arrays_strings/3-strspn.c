#include "main.h"

/**
 * _strchr - Entry point
 * @s: this is where we search for c
 * @c: search criteria
 * @i: itration var
 * Return: return s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i, j;

	for (i = 0; s[i] != 32; i++)
	{
		if (*s == *accept)
		{
			c++;
			return (c);
		}
	}
	if (*s == *accept)
	{
		return (c);
	}
	return (0);
}
