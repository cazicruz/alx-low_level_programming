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
	int n = 2;
	int m = 1;
	int j;

	printf("1, %d, ", n);

	for (; count <= 47; count++)
		{
			j = n;
			n = n + m;
			printf("%d, ", n);
			m = j;
		}
	return (0);
}
