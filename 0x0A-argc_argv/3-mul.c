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
	if (argc == 2)
	{
		printf("%d", argv[1] * argv[2]);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
