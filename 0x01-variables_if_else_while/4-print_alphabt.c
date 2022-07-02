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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != "q" && ch != "e")
		{
			putchar (ch);
		}
		else
			ch++;}

	putchar ('\n');

	return (0);
}
