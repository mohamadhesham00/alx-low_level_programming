#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int number;

    number = 1;
    if (index > 64)
        return (-1);
    while (index > 0)
    {
        number *= 2;
        index--;
    }
    number = ~ number;
    *n = *n & number;
    return (1);
}
