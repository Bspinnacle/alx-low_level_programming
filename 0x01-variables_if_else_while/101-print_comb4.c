#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all possible combinations of three digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{

	for (b = a + 1; b <= '9'; b++)
	{
	for (b = a + 1; b <= '9'; b++)
	if ((b != a) != c)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == '7' && b == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
