#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry point
 * Discription: this is a function that swaps two values
 * @count: counter to tell the length
 * @i: increament variable
 */

int _strlen(char *s)
{
	int count = 0;
	int i;


	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}
	return (count);
}
