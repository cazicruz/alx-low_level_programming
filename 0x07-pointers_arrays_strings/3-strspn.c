#include "main.h"

/**
 * _strchr - Entry point
 * @s: this is where we search for c
 * @c: search criteria
 * Return: return s
 */

unsigned int _strspn(char *s, char *accept)
{

	for (; *s != '\0'; s++)
	{
		if (*s == *accept)
		{
			for (; *s != '\0'; s++)
			{
				return (s);
			}
		}
	}
	if (*s == *accept)
	{
		return (s);
	}
	return (0);
}
