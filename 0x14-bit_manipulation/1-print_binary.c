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

	if (n >> 0)
	{
	print_binary(n);
	_putchar(n);
	}

}

