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
	int count;

	printf ("%s\n",argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
