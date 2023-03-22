#include "main.h"

/**
 * print_alphabet_x10 - A program that prints alphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alph;
	int a = 1;

	while (a <= 10)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	}
	_putchar('\n');
	a++;
	}
}
