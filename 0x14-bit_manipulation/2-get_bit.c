#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
    int test, number;

    number = 1;
    if (index > 64)
	return (-1);
    while (index > 0)
    {
        number *= 2;
    	index--;
    }
    test = n & number;
    if (test)
        return (1);
    else
        return (0);

}
