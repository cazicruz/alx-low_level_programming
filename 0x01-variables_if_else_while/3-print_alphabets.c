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
	char cA;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	ch = toupper(ch);
		putchar (ch);

	putchar ('\n');

	return (0);
}
