#include <stdio.h>

/**
 * main - entry point
 * print a list of combined numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;
	int n;

	for (ch = 0; ch < 100; ch++)
	{
		for (n = 0; n < 100; n++)
		{
			if (ch < n)
			{
				putchar ((ch / 10) + 48);
				putchar ((ch % 10) + 48);
				putchar (' ');
				putchar ((n / 10) + 48);
				putchar ((n % 10) + 48);
				if (ch !=98 || n !=99)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
