#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @n: input parameter
 * Return: x + y
 */
void main(void)
{
	count = 0;
	int n = 1;

	printf("%d", n);

	n = 2;

	printf("%d", n);

	for (; count <= 47; count++)
		{
			n = n + (n-1);
			printf("%d, ", n);
		}
}
