#include "main.h"

/**
 * print_rev - A function that prints a string in reverse,
 * followed by a new line
 * @str: input string
 * Return: no return
 */

void print_rev(char *str)

{
	int a = 0;

	while (str[a] != '\0')
	a++;
	for (a = a - 1; a >= 0; a--)
	_putchar(str[a]);

	_putchar('\n');

}
