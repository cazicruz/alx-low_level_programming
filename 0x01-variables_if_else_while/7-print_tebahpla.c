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

	for (ch = 122; ch >= 97; ch++)
	{
		putchar (ch);
	}

	putchar (10);

	return (0);
}
