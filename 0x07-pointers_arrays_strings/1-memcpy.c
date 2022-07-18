#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: End point
 * @n: number of bytes to fill
 * @src: source location
 * Return: return *s
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
