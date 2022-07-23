#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the prog
 * @argc: argument count
 * @argv: argument vector
 * Return: returns success as 0
 */

int main(int argc, int *argv[])
{
	int i, j;
	if (argc == 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d", i * j);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
