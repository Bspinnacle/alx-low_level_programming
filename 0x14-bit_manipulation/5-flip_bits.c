#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: second number
 * Return:  the number of bits you would need to flip to get from
 * one number to another
 */

int flip_bits(unsigned long int *n, unsigned long int m)
{
	int i, count = 0;

	unsigned long int decimal;

	unsigned long int XOR = (n ^ m);

	for (i = 63; i >= 0; i--)
	{
	decimal = XOR >> i;

	if (decimal & 1)
	count++;
	}

	return (count);
}
