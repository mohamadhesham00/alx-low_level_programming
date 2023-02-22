#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	_putchar('0');
	for (i = 1; i <= 81; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		if (i % 9  == 0)
		{
		_putchar('\n');
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
	}
}
