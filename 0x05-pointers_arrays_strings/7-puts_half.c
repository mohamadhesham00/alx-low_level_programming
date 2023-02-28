#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, half, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	if (len % 2)
		half = (len - 1) / 2;
	else
		half = len / 2;
	for (i = half + 1; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
