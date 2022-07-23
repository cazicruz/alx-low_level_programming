#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the prog
 * @argc: argument count
 * @argv: argument vector
 * Return: returns success as 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (isalpha(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
}
