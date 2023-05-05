#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 *
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n;

	char *c;

	n = 1;
	c = (char *) &n;

	return ((int)*c);

}

