#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int cnt;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	cnt--;
	while (cnt >= 0)
	{
		_putchar(s+cnt);
		cnt--;
	}
	_putchar('\n');
}
