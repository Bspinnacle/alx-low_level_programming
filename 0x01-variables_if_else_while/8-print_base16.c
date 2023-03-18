#include <stdio.h>

/**
 * main - A program that prints numbes in base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	char alph;


	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	
	for (alph = 'a'; alph <= 'f'; alph++);
		putchar(alph);

		putchar("\n");

	return (0);
}
