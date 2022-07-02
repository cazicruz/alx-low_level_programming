#include <stdio.h>
#include <stdlib.h>
/**
 * Entry point
 * Discription: code to print alphabets
 * Return: Always 0 (success)
 */



int main(void)
{
	char ch;
	for (ch = 'a'; ch >= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');

	return (0);
}
