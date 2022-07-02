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

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	for (cA = "A"; cA <= "Z"; cA++)
	{
		putchar (cA)
	}
	putchar ('\n');

	return (0);
}
