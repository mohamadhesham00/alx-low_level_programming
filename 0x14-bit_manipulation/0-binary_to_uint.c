#include "main.h"
#include "stdio.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
    int length, m, i, number;

    length = 0;
    if (b == NULL)
        return (0);
    while (b[length] != '\0')
    {
        length++;
    }
    m = 1;
    number = 0;
    for (i = length - 1; i >= 0;i--){
        if (b[i] == '1')
        {
           number += m;
           m *=2;
        }
        else if (b[i] == '0')
            m *= 2;
        else
            return (0);
    }
    return (number);


}
