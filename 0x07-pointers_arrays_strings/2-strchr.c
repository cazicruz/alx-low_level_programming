#include "main.h"

/**
 * _strchr - Entry point
 * @s: this is where we search for c
 * @c: search criteria
 * Return: return s
 */

char *_strchr(char *s, char c)
{

	for (; *s != 0; s++)
	{
		if (*s == c)
		{
			for (*s == c; *s != 0; s++)
			{
				return (s);
			}
		}
	}
return (0);
}
