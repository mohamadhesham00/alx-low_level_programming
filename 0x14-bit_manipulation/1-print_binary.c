#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
    int shifts, x;

    if (n == 0){
        printf("0");
        return;
    }
    shifts = 1;
    while (n >> shifts)
        shifts++;
    shifts--;
    while (shifts >= 0)
    {
        x = (n >> shifts) & 1;
        if (x)
            printf("1");
        else
            printf("0");

        shifts--;
    }
}
