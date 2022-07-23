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
	if (*argv[argc] == '\0')
	{
		printf("%d\n", argc);
	}
	return (0);
}
