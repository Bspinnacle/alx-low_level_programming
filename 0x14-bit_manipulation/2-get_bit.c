#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given time
 * @n: input
 * @index: index
 *
 * Return: the value of a bit at index, or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if ((n == 0) && (index < 64))
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
