#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s: string
 * Return: returns the lenght of the string
 */


void rev_string(char *s)
{
	int count = 0;
	int n;
	int j;
	char ch;

	while (s[count] != 0)
	{
		count++;
	}
	n = count - 1;
	for (j = 0; j < count/2; n--, j++)
	{
		ch = s[j];
		s[j] = s[n];
		s[n] = ch;
	}
}
