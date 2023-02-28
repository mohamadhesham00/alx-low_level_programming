#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int cnt;

	cnt = 0;
	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	s--;
	cnt = cnt - 1;
	while (cnt >= 0)
	{
		_putchar(*s);
		s--;
		cnt--;
	}
	_putchar('\n');
}
