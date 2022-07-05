#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: always return 0 (success)
 */


void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
