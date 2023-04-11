#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int x;
    unsigned int answer;

    answer = 0;
    x = n ^ m;
    while (x)
    {
        if (x & 1)
	    answer++;
        x = x >> 1;
    }
    return (answer);
}
