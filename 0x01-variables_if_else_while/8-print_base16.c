#include <stdio.h>

/**
 * main - A program that prints numbes in base 16
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char la;

	for (a = '0'; a < '10'; a++)
	putchar(a);
	
	for (la = 'a'; la <= 'f'; la++);
	putchar(la);
	putchar('\n');

	return (0);
}
