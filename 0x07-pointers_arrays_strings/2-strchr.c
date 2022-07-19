#include "main.h"

/**
 * _strchr - Entry point
 * @s: this is where we search for c
 * @c: search criteria
 * Return: return s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			for (s[i] ==c; s[i] != 0; i++)
			{
				putchar(s[i]);
			}
		}
	}
	return (0);
}
