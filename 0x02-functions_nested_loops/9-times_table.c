#include "main.h"

/**
 * times_table - 9x table
 */

void times_table(void)
{
	int no, mult, pro;

	for (no = 0 ; no <= 9; no++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			pro = no * mult;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');

			_putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
