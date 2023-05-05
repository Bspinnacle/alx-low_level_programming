#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long integer
 * return: Always 0
 */

void print_binary(unsigned long int n)
{

	int i;
	int count = 0;

	unsigned long int decimal;

	for (i = 63; i >= 0; i--)

	{
	decimal = n >> i;

	if (decimal & 1)
		{
		_putchar('1');
		count++;
		}
	else
		if (count)
		_putchar ('0');

	}
		if (!count)
		_putchar ('0');

}
