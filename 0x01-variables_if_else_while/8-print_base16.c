#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints numbes in base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char alph;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	}

	for (alph = 'a'; alph <= 'f'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');

	return (0);
}
