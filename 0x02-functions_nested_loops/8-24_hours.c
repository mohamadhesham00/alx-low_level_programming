#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			if (x <= 9)
			{
				_putchar('0');
				_putchar('0' + x);
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			_putchar(':');
			if (y <= 9)
			{
				_putchar('0');
				_putchar('0' + y);
			}
			else
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			_putchar('\n');
		}
	}
}			       	
