#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input string
 * Return: no return
 */

void puts2(char *str)

{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
	if ((a % 2) == 0)
	_putchar('\n');

	else
	continue;
	}
	_putchar('\n');
}
