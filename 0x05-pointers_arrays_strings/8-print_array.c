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
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}
