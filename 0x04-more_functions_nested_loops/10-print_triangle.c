#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, spaces, hashtags, j;

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		for (j = 1; j <= spaces; j++)
			_putchar(' ');
		hashtags = size - spaces;
		for (j = 1; j <= hashtags; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
