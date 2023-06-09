#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number
 * to an unsigned int
 * @b: binary number
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0
 * or 1 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
		uint = 2 * uint + (b[i] - '0');
	}

	return (uint);

}
