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
	unsigned long int n = 2;
	unsigned long int m = 1;
	unsigned long int j;

	printf("%lu, %lu, ", m, n);

	for (; count <= 95; count++)
	{
		j = n;
		n = n + m;
		printf("%lu", n);
		m = j;
		if (count != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
