#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * discription: fabonacci
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
		printf("%ld", n);
		m = j;
		if (count != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
