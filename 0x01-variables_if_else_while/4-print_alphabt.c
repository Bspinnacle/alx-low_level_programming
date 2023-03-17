#include <stdio.h>

/**
 * main - A program that prints alphabets in lower case and upper case
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}

	return (0);
}
