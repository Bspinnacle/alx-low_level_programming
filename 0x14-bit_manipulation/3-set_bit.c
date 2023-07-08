#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: number
 * Return: 1 if it works, or -1 if an error occurrs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1  << index) | *n);
	return (1);

}
