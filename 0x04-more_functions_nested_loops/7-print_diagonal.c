#include "main.h"

/**
 * print_diagonal - A program that prints diagonal line n times.
 * @n: number of times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(' ');
	}
	_putchar(92);
	if (a < (n - 1))
	_putchar('\n');
	}
	_putchar('\n');

}
