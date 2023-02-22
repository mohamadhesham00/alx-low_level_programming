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
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	for (i = 1; i <= 81; i++)
	{
		if (i >= 10)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
			_putchar(i + '0');
		if (i % 9 != 0)
		{
			_putchar(',');
			_putchar(' ');
			if (i <= 9)
				_putchar(' ');
		}
		if (i % 9  == 0 && i != 81)
		{
		_putchar('\n');
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
