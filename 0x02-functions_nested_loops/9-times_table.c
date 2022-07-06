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

	for (tX1 = 0; tX1 < 10; tX1++)
	{
		_putchar(48);
		for  (i = 1; i <= 10; i++)
		{
			table_1 = tX1 * i;
			
			if (i == 0)
				_putchar(table_1 + '0');
			if (i != 0 && table_1 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(table_1 + '0');
			}
			else if (table_1 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((table_1 / 10) + 48);
				_putchar((table_1 % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
