#include "main.h"

/**
 * print_times_table - a function that prints the times table stsrting with 0
 * @n: the value of the time table to be printed
 * Return:
 */

void print_times_table(int n)
{
	int num, multi, times;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (multi = 1; multi <= n; multi++)
	{
	_putchar(',');
	_putchar(' ');
	times = num * multi;
	if (times <= 99)
	_putchar (' ');
	if (times <= 9)
	_putchar (' ');
	if (times >= 100)
	{
	_putchar((times / 100) + ('0'));
	_putchar((times / 10) % 10 + '0');
	}
	else if (times <= 99 && times >= 10)
	{
	_putchar((times / 10) + '0');
	}
	_putchar((times % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
