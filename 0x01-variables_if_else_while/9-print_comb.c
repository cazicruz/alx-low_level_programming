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

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
