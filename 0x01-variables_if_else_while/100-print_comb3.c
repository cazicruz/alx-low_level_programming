#include <stdio.h>

/**
 * main - entry point 
 * print a list of combined numbers
 * Return: Always 0 (success)
 */

int main(viod)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
				/* these are ascii codes for space and comma */
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);  /*this is ascii code for  new line*/

	return (0)
}
