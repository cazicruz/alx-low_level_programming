#include "main.h"

/**
 * _strchr - Entry point
 * @s: this is where we search for c
 * @c: search criteria
 * Return: return s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0;)
	{
		if (s[i] == c)
		{
			for (s[i] ==c; s[i] != 0; i++)
			{
				return (s[i]);
			}
		}
	}
	return (0);
}