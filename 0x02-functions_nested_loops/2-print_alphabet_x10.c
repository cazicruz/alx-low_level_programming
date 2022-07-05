#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: always return 0 (success)
 */


void print_alphabet_x10(void)
{
	char ch;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
