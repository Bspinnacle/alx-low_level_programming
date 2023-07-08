#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long int.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, q = 0;

	unsigned long int r;

	for (i = 63; i >= 0; i--)

	{
		r = n >> i;
		if (r & 1)

		{
			_putchar('1');
			q++;
		}
		else if (q)
		_putchar('0');
	}

	if (!q)
	_putchar('0');
}
