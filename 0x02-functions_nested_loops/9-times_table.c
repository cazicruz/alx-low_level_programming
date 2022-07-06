#include "main.h"

/**
 * times_table - Entry point
 * @i, table_1, tX1 : this is the input or number to compare
 * Return: void
 */

void times_table(void)
{
	int tX1;
	int i;
	int table_1;

	for (tX1 = 0; tX1 <= 9; tX1++)
	{
		_putchar(48);
		for  (i = 1; i <= 9; i++)
		{
			table_1 = tX1 * i;
			_putchar(44);
			_putchar(32);
			if (table_1 <= 9)
			{
				_putchar(32);
				_putchar(table_1 + '0');
			}
			else
			{
				_putchar((table_1 / 10) + 48);
				_putchar((table_1 / 10) + 48);
			}
		}
		_putchar('\n');
	}
}
