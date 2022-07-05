#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * decision: try to make this work in first attempt
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	char ch;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
