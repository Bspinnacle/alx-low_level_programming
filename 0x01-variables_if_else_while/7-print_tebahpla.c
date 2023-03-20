#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that mirrors alphabets by printing in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	putchar(alph);

	putchar('\n');


	return (0);
}
