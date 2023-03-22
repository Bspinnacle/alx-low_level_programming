#include "main.h"

/**
 * print_sign - A program prints the sign of a number
 * @n: character to be checked
 * Return: 1 if n > zero, 0 if n is zero, -1 if n < zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
