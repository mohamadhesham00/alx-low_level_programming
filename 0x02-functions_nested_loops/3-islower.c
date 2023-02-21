#include "main.h"

/**
 * _islower - check the code for determing whether it's lower or upper case
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
