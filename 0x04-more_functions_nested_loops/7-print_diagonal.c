#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_diagonal(int n)
{
	int i, spaces, j;

	for (i = 1; i <= n; i++)
	{
		spaces = n - i;
		for (j = 1; j <= spaces; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
