#include <stdio.h>
#include <stdlib.h>



/**
 * main - Entry point
 * Discription: code to print alphabets
 * Return: Always 0 (success)
 */


int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 113 && ch != 101)
		{
			putchar (ch);
		}
		else
			ch--;
	}

	putchar (10);

	return (0);
}
