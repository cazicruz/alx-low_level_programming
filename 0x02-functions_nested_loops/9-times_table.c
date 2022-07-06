#include "main.h"

/**
 * times_table - Entry point
 * @i, table_1, tX1 : this is the input or number to compare
 * Return: void
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
			_putchar(44);
			_putchar(32);
			if (table_1 < 10)
			{
				_putchar(32);
				_putchar(table_1 + 48);
			}
			else
			{
				_putchar((table_1 /10) + 48);
				_putchar((table_1 /10) + 48);
			}
		}
		_putchar('\n');
	}
}
