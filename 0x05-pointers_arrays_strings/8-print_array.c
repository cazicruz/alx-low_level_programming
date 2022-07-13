#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: string
 * @n: lenght of a
 * Return: returns the lenght of the string
 */


void print_array(int *a, int n)
{
	int i = n - 1;

	for (i = 0; i < n; i++)
	{
		if ((i + 1) >= n)
		{
			printf("%i", a[i]);
			printf("\n");
		}
		else
		{
			printf("%i, ", a[i]);
		}

	}
	if (a[n] != 0)
	{
		printf("\n");
	}
}
