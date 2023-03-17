#include <stdio.h>

/**
 * main - A program that prints alphabet in lower caset
 * Return: Always 0 (success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
