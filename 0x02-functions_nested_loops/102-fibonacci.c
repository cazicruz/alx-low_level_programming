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

	printf("1, %d", n);

	for (; count <= 47; count++)
		{
			n = n + (n-1);
			printf("%d, ", n);
		}
}
