#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: number
 * Return: the value of the bit at index index or -1 if an error occus
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n  >> index) & 1;
	return (bit);

	if (index > 63)
	return (-1);
}
