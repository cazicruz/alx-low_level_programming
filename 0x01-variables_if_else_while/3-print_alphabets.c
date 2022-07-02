#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Discription: code to print alphabets
 * Return: Always 0 (success)
 */



int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch ="A"; ch <= "Z"; ch++)
		putchar (ch);

	putchar ('\n');

	return (0);
}
