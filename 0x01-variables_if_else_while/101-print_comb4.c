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
	int l;

	for (ch = 48; ch <= 58; ch++)
	{
		for (n = 49; n <= 58; n++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > n && n > ch)
				{
					putchar(ch);
					putchar(n);
					putchar(l);
					if (ch != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar(10);  /*this is ascii code for  new line*/

	return (0);
}
