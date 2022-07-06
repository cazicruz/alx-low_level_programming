#include "main.h"

/**
 * times_table - Entry point
 * @n: this is the input or number to compare
 * Return: always return 0 (success)
 */

void times_table(void)
{
	int i;
	int table_1;
	int tX1;

	for (tX1 = 0; tX1 < 10; tX1++)
	{
		for  (i = 0; i < 10; i++)
		{
			table_1 = tX1 * i;
			_putchar("%i ,", table_1);
		}
	}
	return (0);
}
