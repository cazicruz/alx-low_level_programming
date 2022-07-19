#include "main.h"

/**
 * _strchr - Entry point
 * @s: this is where we search for c
 * @c: search criteria
 * Return: return s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == *accept)
		{
			for (; *s != '\0'; c++)
			{
				return (c);
			}
		}
	}
	if (*s == *accept)
	{
		return (c);
	}
	return (0);
}
