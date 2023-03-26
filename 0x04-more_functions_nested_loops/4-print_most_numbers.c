#include "main.h"

/**
 * print_most_numbers - A program that prints numbers between 0 to 9
 * but does not print 2 and 4
 * Return: no return.
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
	if (ch != 50 && ch != 52)
	_putchar(ch);
	}
	_putchar('\n');
}

