#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the prog
 * @argc: argument count
 * @argv: argument vector
 * Return: returns success as 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
