#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int cnt, i;

	char x[100000];

	while (s[cnt] != '\0')
	{
		cnt++;
	}
	for (i = 0; i < cnt; i++)
		x[cnt - 1 - i] = s[i];
	for (i = 0; i < cnt; i++)
		s[i] = x[i];
}
