#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @n: input parameter
 * Return: x + y
 */
int main(void)
{
	int count = 0;
	long int n = 2;
	long int m = 1;
	long int j;

	printf("%ld, %ld, ", m, n);

	for (; count <= 47; count++)
		{
			j = n;
			n = n + m;
			printf("%ld, ", n);
			m = j;
		}
	printf("\n");
	return (0);
}
