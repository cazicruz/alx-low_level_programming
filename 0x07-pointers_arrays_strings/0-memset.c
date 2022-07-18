#include "main.h"

/**
 * _memset - Entry point
 * @s: memory area
 * @n: number of bytes to fill
 * @b: constant byte
 * Return: return *s 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
