#include <stdio.h>

/**
 * main - A program that prints numbes in base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char le;

	for (a = '0'; a <= '9'; a++)
	putchar(a);

	for (le = 'a'; le <= 'f'; le++);
	putchar(le);

	putchar('\n');
	return (0);
}
